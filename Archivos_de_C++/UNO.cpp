/*Diseñé un programa que  lea un vector de
 10 posiciones,luego determina si la quin
 ta posicion es positiva, si la primera posición
  es negativa y si la ultima posición es cero.*/

#include <iostream>
using namespace std;
int main() {
	const int tamano_vector = 10; //tamaño de vector
	int vector[tamano_vector];


	cout << "Ingrese " << tamano_vector << " elementos del vector:\n"; //lementos del vector.
	for (int i = 0; i < tamano_vector; ++i) {
		cout << "Elemento " << i + 1 << ": ";
		cin >> vector[i];//lee los elementos
	}


	if (vector[4] > 0) {
		cout << "El quinto elemento es positivo.\n";
	} else {//verifica quinto elemento del vector es positivo e imprime un mensaje 
		cout << "El quinto elemento no es positivo.\n";
	}

	if (vector[0] < 0) {
		cout << "El primer elemento es negativo.\n";//verifica primer elemento del vector es negativo e imprime un mensaje 
	} else {
		cout << "El primer elemento no es negativo.\n";
	}

	if (vector[tamano_vector - 1] == 0) {
		cout << "El ultimo elemento es cero.\n";//verifica último elemento del vector es cero e imprime un mensaje correspondiente.
	} else {
		cout << "El ultimo elemento no es cero.\n";
	}

	return 0;
}
