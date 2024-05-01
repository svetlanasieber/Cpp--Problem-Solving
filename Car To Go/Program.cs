using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Car_To_Go
{
    class Program
    {
        static void Main(string[] args)
        {
            double budget = double.Parse(Console.ReadLine());
            string season = Console.ReadLine().ToLower();

            string car = string.Empty;
            string type = string.Empty;
            double price = 0;

            if (season == "summer")
            {
                if (budget > 500)
                {
                    type = "Luxury class";
                    car = "Jeep";
                    price = budget * 0.9;
                }
                else if (budget <= 500 && budget > 100)
                {
                    type = "Compact class";
                    price = budget * 0.45;
                    car = "Cabrio";
                }
                else if (budget <= 100)
                {
                    type = "Economy class";
                    car = "Cabrio";
                    price = budget * 0.35;
                }
            }
            if (season == "winter")
            {
                if (budget > 500)
                {
                    type = "Luxury class";
                    car = "Jeep";
                    price = budget * 0.9;
                }
                else if (budget <= 500 && budget > 100)
                {
                    type = "Compact class";
                    price = budget * 0.80;
                    car = "Jeep";
                }
                else if (budget <= 100)
                {
                    type = "Economy class";
                    car = "Jeep";
                    price = budget * 0.65;
                }
            }
            Console.WriteLine($"{type}");
            Console.WriteLine($"{car} - {price:f2}");
            }
        }
}
