/*Crea un programa que imprima el total de un vector
,promedio de los valores, imprima ell promedio d
e 25% de los valores*/
#include<iostream>
#include <stdio.h>
#define SIZE 5
using namespace std;

int main() {
    int vector[SIZE] = {1,2,3,4,5};
    int total = 0;
    float promedio, promedio_25;//almacenar el promedio de los primeros 25% de los valores
    int i;

for (i = 0; i < SIZE; i++) {
        total += vector[i];//recorre vevtor y suma cada elemento total
    }

    
    promedio = (float)total / SIZE;// calcula promedio
    
    int total_25 = 0;
    for (i = 0; i < SIZE * 0.25; i++) {
        total_25 += vector[i];
        /*/Se inicializa una nueva variable total_25 para almacenar la suma de 
		los primeros 25% de los valores del vector. Se recorre el vector hasta 
		el índice correspondiente al 25% del tamaño del vector y se suman esos elementos./*/
    }
    promedio_25 = (float)total_25 / (SIZE * 0.25);/*/Se calcula el promedio de los primeros 
	25% de los valores dividiendo la suma total_25 por el 25% del tamaño del vector./*/

    cout<<"Total del vector\n"<< total;
    cout<<endl;
    cout<<"Promedio de los valores\n"<<promedio;
    cout<<endl;
    cout<<"Promedio del 25%% de los valores:\n"<< promedio_25;

    return 0;
}
