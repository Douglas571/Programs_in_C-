#include <iostream>
#include <conio.h>

using namespace std;

//Declarando prototipos
void calcularEdad();
void calcularSalario();

int main() {
  	bool salir = false;

   	while(!salir) {
  		int opcion;

  		cout << "--- Calculos Random ---" << endl;
  		cout << "  1. Calcular Edad" << endl;
  		cout << "  2. Calcular Salario" << endl;
  		cout << endl
	      	 << "  0. Salir" << endl;
	  	cout << " Selecciona una opcion:";

  		cin >> opcion;
  		cout << endl;

  		switch(opcion) {
    		case 0:
      			salir = true;
      			break;
    		case 1:
		        calcularEdad();
    	  		break;
    		case 2:
      			calcularSalario();
      			break;
    		default:
      			cout << "ERROR: Opcion invalida, selecciona otra." << endl;
      			break;
  		}
  	}
  	cout << "Saliendo, presiona cualquier tecla para continuar..." << endl;
	getch();
}

//Definiendo funciones

void calcularEdad() {
  int annoDeNacimiento, annoActual, edad;

  cout << "*** Calculando Edad ***" << endl;
  cout << "Anno de nacimiento: ";
  cin >> annoDeNacimiento;
  cout << "Anno actual: ";
  cin >> annoActual;

  edad = annoActual - annoDeNacimiento;

  cout << "Tienes " << edad << " annos de vida." << endl << endl;
}

void calcularSalario() {
  cout << "*** Calculando Salario ***" << endl;

  double salarioPorHora, horasTrabajadas, salario;

  cout << "Cual es el salario por hora en $?: ";
  cin >> salarioPorHora;
  cout << "Cuantas horas trabajaste?: ";
  cin >> horasTrabajadas;

  salario = salarioPorHora * horasTrabajadas;

  cout << "El salario total es: " << salario << "$" << endl << endl;
}
