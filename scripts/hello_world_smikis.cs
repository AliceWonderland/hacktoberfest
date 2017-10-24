// LANGUAGE: C#
// ENV: Visual Studio
// AUTHOR: Tomas
// GITHUB: https://github.com/smikis

// This is hello world in binary. Converts from Binary to actual text

using System;
using System.Collections.Generic;
using System.Text;

namespace ConsoleApp3
{
    class Program
    {
        private static string helloWorld =
                "01001000011001010110110001101100011011110010110000100000010101110110111101110010011011000110010000100001";
        static void Main(string[] args)
        {
            var byteList = GetBytesFromString(helloWorld);
            var helloWorldTranslated = Encoding.ASCII.GetString(byteList);
            Console.WriteLine(helloWorldTranslated);
        }

        static Byte[] GetBytesFromString(string stringValue)
        {
            var bytes = new List<Byte>();
            var byteCount = helloWorld.Length / 8;           
            for (int i = 0; i < byteCount; i++)
            {
                var byteValue = Convert.ToByte(stringValue.Substring(i * 8, 8),2);
                bytes.Add(byteValue);
            }
            return bytes.ToArray();
        }
    }
}
