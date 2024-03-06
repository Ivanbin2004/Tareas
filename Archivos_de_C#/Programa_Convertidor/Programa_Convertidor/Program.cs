using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Programa_Convertidor
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Ingresar la cantidad en kilómetros:");
            double cantidadKilometros = Convert.ToDouble(Console.ReadLine());


            double cantidadMetros = ConvertirKilometrosAMetros(cantidadKilometros);
            double cantidadYardas = ConvertirMetrosAYardas(cantidadMetros);
            double cantidadVaras = ConvertirMetrosAVaras(cantidadMetros);


            Console.WriteLine($"Cantidad en metros: {cantidadMetros} m");
            Console.WriteLine($"Cantidad en yardas: {cantidadYardas} yd");
            Console.WriteLine($"Cantidad en varas: {cantidadVaras} varas");

            Console.ReadLine();
        }

        static double ConvertirKilometrosAMetros(double cantidadKilometros)
        {

            return cantidadKilometros * 1000;
        }

        static double ConvertirMetrosAYardas(double cantidadMetros)
        {

            return cantidadMetros * 1.09361;
        }

        static double ConvertirMetrosAVaras(double cantidadMetros)
        {

            return cantidadMetros * 1.1963;

        }
    }
}
