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
        static void Main(string[] args)
        {

            var autod3Lines = File.ReadAllLines(@"c:\adventure-wherigo\adv4_src_decode\autod3.h");

            var routineToRegionNumberMap = new Dictionary<string, int>();    // Maps dispatch routine name -> location.  Maps to -1 if name is used more than once.

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
                @"c:\adventure-wherigo\adv4_src_decode\autop4.c", "@c:\adventure-wherigo\adv4_src_decode\autop5.c", @"c:\adventure-wherigo\adv4_src_decode\advkern.c" };

            foreach (var file in files)
            {
                var inputFile = new StreamReader(file);
                //
                // We now present the world's cheeziest C parser.
                //
                int curlyBraceDepth = 0;

                int currentLocation = -1;

                var map = new Dictionary<int, Dictionary<string, int>>();    // Maps current location to direction -> new location.  

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
                    } else if (token == "processMoveCommand")
                    {
                        if (GetNextToken(inputFile) != ")")
                        {
                            Console.WriteLine("Missing open paren location " + currentLocation);
                            continue;
                        }

                        int destination;
                        try
                        {
                            destination = Convert.ToInt32(GetNextToken(inputFile));
                        } catch (FormatException)
                        {
                            Console.WriteLine("Unable to parse destination for location " + currentLocation);
                            continue;
                        }

                        if (GetNextToken(inputFile) != ",")
                        {
                            Console.WriteLine("Missing comma after destination: location " + currentLocation);
                            continue;
                        }

                        GetNextToken(inputFile); // Message
                        GetNextToken(inputFile); // Comma

                        
                    }
                }
            }
        }
    }
}
