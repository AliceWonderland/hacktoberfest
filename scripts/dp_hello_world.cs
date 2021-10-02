using System;
namespace HelloWorld
{
    public class Solution
    {
        static void Main(string[] args)
        {
            for (var i = 0; i < 10; i++)
            {
                Console.WriteLine("Hello line number: {0}", (i+1));
            }
        }
    }
}