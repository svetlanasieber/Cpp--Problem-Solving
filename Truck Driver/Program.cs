using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Truck_Driver
{
    class Program
    {
        static void Main(string[] args)
        {
            string season = Console.ReadLine().ToLower();
            double kmPerMonth = double.Parse(Console.ReadLine());

            //double kmPerSeason = kmPerMonth * 4;

            double salary = kmPerMonth * 1.45;
            if(kmPerMonth <= 10000 && kmPerMonth > 5000)
            {
                if (season == "spring" || season == "autumn")
                {
                    salary = kmPerMonth * 0.95;
                }
                else if (season == "summer")
                {
                    salary = kmPerMonth * 1.10;
                }
                else if (season == "winter")
                {
                    salary = kmPerMonth * 1.25;
                }
            }
            else if (kmPerMonth <= 5000)
            {
                if (season == "spring" || season == "autumn")
                {
                    salary = 0.75 * kmPerMonth;
                }
                else if (season == "summer")
                {
                    salary = 0.90 * kmPerMonth;
                }
                else if (season == "winter")
                {
                    salary = kmPerMonth * 1.05;
                }
            }
            double salaryAfterTaxes = (salary * 0.9) * 4;

            Console.WriteLine($"{salaryAfterTaxes:f2}");
        }
    }
}
