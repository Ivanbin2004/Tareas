/*Crea un programa que lea los vetores de 20 ingresados
 por el usuario,(si es par que sume 1 y si es impar que reste 2)
 que imprima los datos ingresados y la nueva mejora del dato, y si el dato es menor que
 lo deje a 0.
*/
#include <iostream>
using namespace std;

#define SIZE 5  //especificar el tamaño del vector.

int main() {
    int vector[SIZE];//tamaño especificado por la constante SIZE.
    int i;

    cout << "Ingrese valores para el vector:" << endl;
    for (i = 0; i < SIZE; i++) { // leer valores  y almacenarlos en el vector.
        cin >> vector[i];
    }

    cout << "Datos ingresados:" << endl;
    for (i = 0; i < SIZE; i++) { //recorre el vector y se muestran los valores almacenados.
        cout << vector[i] << " ";

        if (vector[i] % 2 == 0) {
            vector[i]++;           //modifica vector si es par=suma, impar=resta o negativo=0
        } else {
            vector[i] -= 2;
        }

        if (vector[i] < 0) {
            vector[i] = 0;
        }
    }

    cout << "\nNueva modificación del vector:" << endl;// mustra los nuevos valores del vector después de la modificación.
    for (i = 0; i < SIZE; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;

    return 0;
}
