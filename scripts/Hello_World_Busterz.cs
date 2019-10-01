// LANGUAGE: C#
// AUTHOR: Deddy T
// GITHUB: https://github.com/Busterz

using System;
using System.Collections.Generic;
using System.Text;

namespace Hello_World_Busterz
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hi there, what's your name?");
            string user = Console.ReadLine();
            if(user.Length > 0)
            {
                user = user.Substring(0, 1).ToUpper() + user.Substring(1, user.Length-1);
            }
            Console.WriteLine("Hello " + user + "!");
            Console.WriteLine("Hello World!");
            Console.WriteLine("Welcome to Programming!");
            Console.Read();
        }
    }
}
