using System;

namespace PersonalWork
{
    class PointTest
    {
        public int x;
        public int y;
    }

    class Program
    {
        static void Main()
        {
            var p = new PointTest();
            p.x = 10;
            p.y = 15;
            Console.WriteLine($"x = {p.x}, y = {p.y}");
        }
    }
}
