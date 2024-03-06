using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Programa_promedio_de_ventas
{
    class Program
    {
        static void Main(string[] args)
        {
            // Solicitar el nombre y apellido del vendedor
            Console.WriteLine("Nombre del vendedor:");
            string nombre = Console.ReadLine();

            Console.WriteLine("Apellido del vendedor:");
            string apellido = Console.ReadLine();

            // Declarar un arreglo para almacenar las ventas por mes
            double[] ventasPorMes = new double[12];

            // Solicitar las ventas por mes
            for (int i = 0; i < 12; ++i)
            {
                Console.WriteLine($"Ventas alcanzadas en el mes {i + 1}:");
                ventasPorMes[i] = Convert.ToDouble(Console.ReadLine());
            }

            // Calcular el promedio de ventas por mes
            double totalVentas = 0;
            foreach (double ventas in ventasPorMes)
            {
                totalVentas += ventas;
            }

            double promedioVentas = totalVentas / 12;

            // Mostrar resultados
            Console.WriteLine($"El vendedor se llama: {nombre} {apellido}");
            Console.WriteLine($"El Promedio de ventas por mes es de : {promedioVentas:C}");

            Console.ReadLine();



        }
    }
}
