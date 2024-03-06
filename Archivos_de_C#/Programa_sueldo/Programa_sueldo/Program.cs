using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Programa_sueldo
{
    class Program
    {
        static void Main(string[] args)
        /*/Programa que pida el sueldo base de un empleado y determine los descuentos y los sueldos netos a ppagar.En un calzado de zapatos se aplica los siguientas descuentos 
         * al sueldo base de cada uno de lso empleados:
         * sueldo minimo de 3300
         * Renta 10%
         * AFP 7%
         * Seguro social 5%/*/
        {

            double sueldobase;
            do
            {
                Console.WriteLine("Sueldo base del empleado");
                sueldobase = Convert.ToDouble(Console.ReadLine());
                if (sueldobase < 3300)
                {
                    Console.WriteLine("El suel ingresado es menor al sueldo mimo, por favor ingrese sueldo minimo corespondiente");
                }
            } while (sueldobase<3300);
            double renta = sueldobase * 0.1;
            double AFP = sueldobase * 0.07;
            double Segurosocial = sueldobase * 0.05;

            double sueldoneto = sueldobase - renta - AFP - Segurosocial;

            Console.WriteLine("DESCUENTO:");
            Console.WriteLine($"Resnta{ renta:C}");
            Console.WriteLine($"AFP{AFP:C}");
            Console.WriteLine($"Segurosocial{Segurosocial:C}");
        }
    }
}
