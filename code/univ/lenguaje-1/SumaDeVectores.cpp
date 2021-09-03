#include <iostream>
#include <string>
using namespace std;

int* pedirVector(int numeroDeElementos, string nombre);
int* sumarVectores(int* vector1, int* vector2, int numeroDeElementos);
void imprimirVector (int* vector, int numeroDeElementos, string nombre);

int main () {
	int numeroDeElementos = 3;
	int* vector1;
	int* vector2;
	int* vectorSuma;
	
	cout << "Programa sumar dos vectores." << endl;
	
	vector1 = pedirVector(numeroDeElementos, "A");
	vector2 = pedirVector(numeroDeElementos, "B");

	vectorSuma = sumarVectores(&vector1[0], &vector2[0], numeroDeElementos);
	
	imprimirVector(vectorSuma, numeroDeElementos, "Sumatoria");
}

int* pedirVector(int numeroDeElementos, string nombre) {
	
	int* vector = new int[numeroDeElementos];
	
	cout << "Ingresa los elementos del vector " << nombre << ": " << endl;
	
	for(int idx = 0; idx < numeroDeElementos; idx++) {
		cout << "  Elemento #" << (idx + 1) << ": ";
		cin >> vector[idx];
	}
	
	cout << endl;
	
	return vector;
}

int* sumarVectores (int* vector1, int* vector2, int numeroDeElementos) {
	int* vectorSuma = new int[numeroDeElementos];
	
	for(int idx = 0; idx < numeroDeElementos; idx++) {
		vectorSuma[idx] = vector1[idx] + vector2[idx];
	}
	
	return vectorSuma;
}

void imprimirVector (int* vector, int numeroDeElementos, string nombre) {
	int idxUltimoElemento = numeroDeElementos - 1;
	
	cout << "Los elementos del vector " << nombre << " son: " << endl;
	
	cout << "  [ ";
	
	for(int idx = 0; idx < idxUltimoElemento; idx++) {
		cout << vector[idx] << ", ";
	}
	
	cout << vector[idxUltimoElemento] << " ]" << endl;
	
	cout << endl;
}
