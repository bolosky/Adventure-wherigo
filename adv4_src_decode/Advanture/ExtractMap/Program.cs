using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace ExtractMap
{
    class Program
    {
        static char[] whiteSpace = { ' ', '\t', '\n', '\r' };

        static bool isIdentifierCharacter(char nextChar)
        {
            return nextChar >= 'a' && nextChar <= 'z' || nextChar >= 'A' && nextChar <= 'Z' || nextChar >= '0' && nextChar <= '9' || nextChar == '_';
        }
        static string GetNextToken(StreamReader inputFile)  // doesn't really work right for multiple character non-letter/number tokens, like <<.  Also is happy with invalid tokens like 12PPP35
        {
            while (inputFile.Peek() != -1 && whiteSpace.Contains((char)inputFile.Peek()))
            {
                inputFile.Read();
            }

            if (inputFile.Peek() == -1)
            {
                return null;
            }

            string nextToken = ((char)inputFile.Read()).ToString();
            if (!isIdentifierCharacter(nextToken[0]))
            {
                return nextToken;
            }

            while (inputFile.Peek() != -1)
            {
                var nextChar = (char)inputFile.Peek();

                if (isIdentifierCharacter(nextChar))
                {
                    nextToken += nextChar;
                    inputFile.Read();   // Consume the char.
                } else
                {
                    break;
                }
            }

            return nextToken;
        }

        static string ListOfStringsToValues(IEnumerable<string> inputEnumerable)
        {
            var input = inputEnumerable.ToList();

            if (input.Count() == 0)
            {
                return "";
            }

            if (input.Count() == 1)
            {
                return input[0];
            }

            var retVal = "{" + input[0];
            for (int i = 1; i < input.Count(); i++)
            {
                retVal += ", " + input[i];
            }

            return retVal + "}";
        }

        class OutputRecord : IComparable<OutputRecord>
        {
            public OutputRecord(int location_, string line_)
            {
                location = location_;
                line = line_;
            }

            public int CompareTo(OutputRecord peer)
            {
                return line.CompareTo(peer.line);
            }

            public readonly int location;
            public readonly string line;
        }

        static void Main(string[] args)
        {

            var autod3Lines = File.ReadAllLines(@"c:\adventure-wherigo\adv4_src_decode\autod3.h");

            var routineToRegionNumberMap = new Dictionary<string, int>();    // Maps dispatch routine name -> location.  Maps to -1 if name is used more than once.

            routineToRegionNumberMap.Add("r32", 137);   // This is not in the mapping table, but is called from the function in the mapping table.
            routineToRegionNumberMap.Add("f23", 142);
            routineToRegionNumberMap.Add("n26", 141);
            routineToRegionNumberMap.Add("u29", 150);
            routineToRegionNumberMap.Add("p27", 150);
            routineToRegionNumberMap.Add("q37", 152);
            routineToRegionNumberMap.Add("u30", 152);

            var commandAliases = new Dictionary<string, string>();
            commandAliases.Add("514", "COMMAND_NORTH");
            commandAliases.Add("515", "COMMAND_NORTHEAST");
            commandAliases.Add("516", "COMMAND_EAST");
            commandAliases.Add("517", "COMMAND_SOUTHEAST");
            commandAliases.Add("518", "COMMAND_SOUTH");
            commandAliases.Add("519", "COMMAND_SOUTHWEST");
            commandAliases.Add("520", "COMMAND_WEST");
            commandAliases.Add("521", "COMMAND_NORTHWEST");
            commandAliases.Add("523", "COMMAND_UP");
            commandAliases.Add("524", "COMMAND_DOWN");

            bool inRegion = false;
            int arrayIndex = 0;
            for (int i = 0; i < autod3Lines.Count(); i++)
            {
                var line = autod3Lines[i];
                if (!inRegion)
                {
                    if (line == @"#if 1")
                    {
                        inRegion = true;
                    }
                    continue;
                }

                if (line == @"#endif")
                {
                    break;
                }
                var identifier = line.Trim().Split(',')[0];

                if (routineToRegionNumberMap.ContainsKey(identifier))
                {
                    routineToRegionNumberMap[identifier] = -1;
                } else
                {
                    routineToRegionNumberMap.Add(identifier, arrayIndex);
                }

                arrayIndex++;
            }

            Console.WriteLine("Found " + routineToRegionNumberMap.Count() + " unique identifiers in " + arrayIndex + " lines.");

            string[] files = { @"c:\adventure-wherigo\adv4_src_decode\autop0.c", @"c:\adventure-wherigo\adv4_src_decode\autop1.c", @"c:\adventure-wherigo\adv4_src_decode\autop2.c", @"c:\adventure-wherigo\adv4_src_decode\autop3.c",
                @"c:\adventure-wherigo\adv4_src_decode\autop4.c", @"c:\adventure-wherigo\adv4_src_decode\autop5.c", @"c:\adventure-wherigo\adv4_src_decode\advkern.c" };

            var map = new Dictionary<int, Dictionary<string, string>>();    // Maps current location to direction -> new location.  
            var directions = new List<string>();    // All directions we've seen

            //
            // Add in the canonical directions here, so that they're first in the list.
            //
            directions.Add("COMMAND_NORTH");
            directions.Add("COMMAND_SOUTH");
            directions.Add("COMMAND_EAST");
            directions.Add("COMMAND_WEST");
            directions.Add("COMMAND_NORTHEAST");
            directions.Add("COMMAND_NORTHWEST");
            directions.Add("COMMAND_SOUTHEAST");
            directions.Add("COMMAND_SOUTHWEST");
            directions.Add("COMMAND_UP");
            directions.Add("COMMAND_DOWN");

            foreach (var file in files)
            {
                var inputFile = new StreamReader(file);
                //
                // We now present the world's cheeziest C parser.
                //
                int curlyBraceDepth = 0;
                int currentLocation = -1;
                string token;

                while (null != (token = GetNextToken(inputFile)))
                {
                    if (token == "{")
                    {
                        curlyBraceDepth++;
                    } else if (token == "}")
                    {
                        if (curlyBraceDepth <= 0)
                        {
                            Console.WriteLine("Mismatched curly braces in " + file);
                        } else
                        {
                            curlyBraceDepth--;
                            if (curlyBraceDepth == 0)
                            {
                                currentLocation = -1;
                            }
                        }
                    } else if (curlyBraceDepth == 0 && routineToRegionNumberMap.ContainsKey(token))
                    {
                        currentLocation = routineToRegionNumberMap[token];
                    } else if (currentLocation != -1 && token == "processMoveCommand")
                    {
                        if (GetNextToken(inputFile) != "(")
                        {
                            Console.WriteLine("Missing open paren location " + currentLocation);
                            continue;
                        }

                        var destination = GetNextToken(inputFile);

                        if (GetNextToken(inputFile) != ",")
                        {
                            Console.WriteLine("Missing comma after destination: location " + currentLocation);
                            continue;
                        }

                        GetNextToken(inputFile); // Message
                        GetNextToken(inputFile); // Comma

                        if (!map.ContainsKey(currentLocation)) {
                            map.Add(currentLocation, new Dictionary<string, string>());
                        }

                        while (true) {
                            var direction = GetNextToken(inputFile);
                            if (direction == ",")
                            {
                                continue;
                            }

                            if (direction == "-")   // Negative numbers signal the last input to this varargs function.
                            {
                                direction = GetNextToken(inputFile);
                            }

                            if (direction == null)
                            {
                                Console.WriteLine("Unexpected EOF processing " + currentLocation);
                                break;
                            }

                            if (direction == ")")
                            {
                                break;
                            }

                            if (commandAliases.ContainsKey(direction))
                            {
                                direction = commandAliases[direction];
                            }

                            if (map[currentLocation].ContainsKey(direction))
                            {
                                if (map[currentLocation][direction] != destination)
                                {
                                    Console.WriteLine("Multiple destinations " + currentLocation + " " + direction + "-> (" + map[currentLocation][direction] + ", " + destination + ")");
                                }
                            } else
                            {
                                map[currentLocation].Add(direction, destination);
                                if (!directions.Contains(direction))
                                {
                                    directions.Add(direction);
                                }
                            }
                        } // tokens in a processMoveCommand
                    } // parsing a processMoveCommand
                } // tokens of an input file
            } // All input files

            Console.WriteLine("Total of " + map.Count() + " sources and " + directions.Count() + " directions");

            var locationDescriptions = new Dictionary<int, string>();
            File.ReadAllLines(@"c:\Adventure-wherigo\locations.txt").ToList().ForEach(x => locationDescriptions.Add(Convert.ToInt32(x.Split('\t')[0]), x.Split('\t')[1]));




            var outputRecords = new List<OutputRecord>();



            foreach (var locationEntry in map)
            {
                var fromLocation = locationEntry.Key;
                var outArcs = locationEntry.Value;

                string line = fromLocation + "\t";

                if (locationDescriptions.ContainsKey(fromLocation))
                {
                    line += locationDescriptions[fromLocation];
                }

                line += "\t" + ListOfStringsToValues(routineToRegionNumberMap.Where(x => x.Value == fromLocation).Select(x => x.Key));

                foreach (var direction in directions)
                {
                    if (outArcs.ContainsKey(direction))
                    {
                        if (outArcs[direction].StartsWith("LOCATION_"))
                        {
                            line += "\t" + outArcs[direction].Substring(9);
                        }
                        else
                        {
                            line += "\t" + outArcs[direction];
                        }
                    } else
                    {
                        line += "\t";
                    }
                }

                outputRecords.Add(new OutputRecord(fromLocation, line));
            }

            var outputFile = new StreamWriter(@"c:\adventure-wherigo\GeneratedMap.txt");
            outputFile.Write("From Location\tdescription\tRoutine(s)");

            foreach (var direction in directions)
            {
                if (direction.StartsWith("COMMAND_"))
                {
                    outputFile.Write("\t" + direction.Substring(8));
                }
                else
                {
                    outputFile.Write("\t" + direction);
                }
            }
            outputFile.WriteLine();

            outputRecords.Sort();
            outputRecords.ForEach(x => outputFile.WriteLine(x.line));

            outputFile.Close();

            foreach (var regionEntry in routineToRegionNumberMap)
            {
                if (regionEntry.Value == -1)
                {
                    continue;
                }

                if (!map.ContainsKey(regionEntry.Value))
                {
                    Console.WriteLine("Found region with no map info.  Region number " + regionEntry.Value + ", routine " + regionEntry.Key);
                }
            }
        }
    }
}
