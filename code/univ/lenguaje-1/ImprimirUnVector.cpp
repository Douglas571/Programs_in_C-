#include <iostream>
using namespace std;

void pedirVector(int* vector, int numeroDeElementos);
void imprimirVector (int* vector, int numeroDeElementos);

int main () {
	int numeroDeElementos = 5;
	int listaDeNumeros[numeroDeElementos];
	
	pedirVector(&listaDeNumeros[0], numeroDeElementos);
	imprimirVector(listaDeNumeros, numeroDeElementos);
}


void pedirVector(int* vector, int numeroDeElementos) {
	cout << "Ingresa los elementos del vector: " << endl;
	
	for(int idx = 0; idx < numeroDeElementos; idx++) {
		cout << "  Elemento #" << (idx + 1) << ": ";
		cin >> vector[idx];
	}	
	
	cout << endl;
}

void imprimirVector (int* vector, int numeroDeElementos) {
	cout << "Los elementos en el vector son: " << endl;
	
	for(int idx = 0; idx < numeroDeElementos; idx++) {
		cout << "  #" << (idx + 1) << " = " << vector[idx] << endl;
	}
	
	cout << endl;
}
