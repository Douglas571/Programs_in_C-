// Ejercicios de Lenguaje II
// Douglas Socorro 29.748.656
// Yhoxin Rossel   28.289.663

// Ejercicio 1:
// Realice un programa que permita 
// calcular el area de un cono,
// aplicando constantes.

//		Formula: A = PI * r * l



#include <iostream>
#include <conio.h>
#include <math.h>
#define PI 3.1416

using namespace std;

int calcular_area_cilindro(float r, float l){
	return (PI * r * l) + (PI * pow(r, 2));
}

int main(){
	float r;
	float l;
	
	cout << "[Info] Programa para calcular "
		<< "el area de un cilindro, de acuerdo "
		<< "a la siguiente formula:" << endl
		<< "	A = pi * r*l + pi*r^2" << endl << endl;
	
	cout << "[?] Radio (r): ";
	cin >> r;
	cout << "[?] Altura (l): ";
	cin >> l;
	
	float area = calcular_area_cilindro(r, l);
	cout << "[resultado] Area: " << area << endl;
	
	cout << "Presiona cualquier tecla para continuar...";
	getch();
	
	return 0;
}
