using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace SplitLocationDispatchTable
{
    class Program
    {
        static void Main(string[] args)
        {
            var lines = File.ReadAllLines(@"c:\adventure-wherigo\adv4_src_decode\autod3.h");

            bool startedArray = false;

            var editedLines = new List<string>();
            int arrayIndex = 0;

            foreach (var line in lines)
            {
                if (!startedArray)
                {
                    Console.WriteLine(line);
                    if (line == @"int (*command_by_location_dispatch_table[])()= { ")
                    {
                        Console.WriteLine("#if 1");
                        startedArray = true;
                    }
                } else
                {
                    if (line == "}; ")
                    {
                        Console.WriteLine(@"#else");
                        editedLines.ForEach(x => Console.WriteLine(x));
                        Console.WriteLine("#endif");
                        Console.WriteLine(line);
                        return;
                    }
                    editedLines.Add(line);
                    foreach (var element in line.Split(','))
                    {
                       if (element.Trim() != "")
                        {
                            Console.WriteLine("\t" + element.Trim() + ",\t// " + arrayIndex++);
                        }
                    }
                }
            }
        }
    }
}
