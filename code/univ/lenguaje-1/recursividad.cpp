/*
	Ejercicios de Funciones recursivas en C++

	Realizado por: Douglas Socorro 29.748.656
*/

#include <iostream>
#include <conio.h>
using namespace std;

int cambiarSigno(int numero);
int sumaSucesiva(int a, int b);
int multiplicar(int primerFactor, int segundoFactor);

int main() {
	int primerFactor, segundoFactor, resultado;
	
	cout << "Este es un programa para multiplicar por suma sucesiva" << endl;
		 
	cout << "Introduce el primer factor: ";
	cin >> primerFactor;
	
	cout << "Introduce el segundo factor: ";
	cin >> segundoFactor;
	
	resultado = multiplicar(primerFactor, segundoFactor);
	
	cout << endl 
		 <<"El resultado de " 
		 << primerFactor << "x" << segundoFactor 
		 << " es igula a: " << resultado
		 << endl << endl
		 << "Presione cualquier tecla para terminar...";
			 
	getch();
	return 0;
}

//Una función auxiliar para cambiarle el signo a un numero.
int cambiarSigno(int numero) {
	return numero * -1;
	
}

//La funcion recursiva.
int sumaSucesiva(int a, int b) {	

	//El caso base.
	if((a == 0) || (b == 0)) {
		return 0;
		
	//el caso general	
	} else {
		
		//Una consideracion si el segundo factor es negativo
		if(b < 0){

			//Para que las siguientes llamadas sean positivas
			b = cambiarSigno(b);

			//Le cambiamos el signo de vuelta al resultado final
			return cambiarSigno(a + sumaSucesiva(a, (b - 1)));
			
		} else {
			//La llamada recursiva de la función
			return a + sumaSucesiva(a, (b - 1));
		}	
	}	
}

//Es una funcion para mejorar la comprension nada más.
int multiplicar(int primerFactor, int segundoFactor) {
	return sumaSucesiva(primerFactor, segundoFactor);
}
