#include <iostream>
using namespace std;

double calcularAreaDeUnCuadrado(double longitudDeLosLados);

int main() {
	double longitudDeLosLados, areaDelCuadrado;

	cout << "Este es un programa "
		 << "para calcular el Area de Un cuadrado."
		 << endl;
		 
	cout << "Pasame la longitud de los lados en cm: ";
	cin >> longitudDeLosLados;
	areaDelCuadrado = calcularAreaDeUnCuadrado(longitudDeLosLados);
	
	cout << endl
	     << "El Area del Cuadrado es: " 
		 << areaDelCuadrado 
		 << "cm."
		 << endl;
	
}

double calcularAreaDeUnCuadrado(double longitudDeLosLados){
	return longitudDeLosLados * longitudDeLosLados;
}
