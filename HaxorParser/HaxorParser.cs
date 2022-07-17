using System;
using System.IO;
using System.Text;

class ReadFile {
    public static void Main(string[] args)
    {
        if (args.Length == 0) {
            Console.WriteLine("File not given");
        }
        else {
            string text = File.ReadAllText(args[1]);
            Console.WriteLine(text);
        }
    }
}