// Ejercicio 2:
// Realice un programa que permita 
// calcular la siguiente ecuacion
// usando constantes

// x = (2ab - 4c) / 7

#include <iostream>
#include <conio.h>
#define DIVISOR 7

using namespace std;

float calcular(float a, float b, float c){
	int const CUATRO = 4;
	int const DOS = 2;
	return (DOS * a * b - CUATRO * c) / DIVISOR;
}

int main(){
	float a;
	float b;
	float c;
	
	cout << "[Info] Programa para calcular el "
		<< "valor de la siguiente formula: " << endl
		<< "	x = 2ab - 4c / 7" << endl << endl;
	
	cout << "[?] a: ";
	cin >> a;
	cout << "[?] b: ";
	cin >> b;
	cout << "[?] c: ";
	cin >> c;
	
	float res = calcular(a, b, c);
	cout << "[resultado] x = " << res << endl;
	
	
	cout << "Presiona cualquier tecla para continuar...";
	getch();
	
	return 0;
}
