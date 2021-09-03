#include <iostream>
#include <conio.h>

using namespace std;

//declaramos los prototipos...
void sumar();
void restar();
void multiplicar();
void dividir();

int main() {

  //varialbe de cierre
  bool salir = false;

  while(!salir){ //Se leería como "mientras no salir"
  	
  	//variable para determinar las opciones
    int opcion = 0;

	//Imrpimimos el menú
    cout << "---- Calculadora ----" << endl
		 << endl
		 << "  1. Sumar" << endl
		 << "  2. Restar" << endl
		 << "  3. Multiplicar" << endl
		 << "  4. Dividir" << endl
		 << endl
		 << "  0. salir" << endl
		 << endl
		 << "Selecciona una opcion: ";
		 
	//pedimos la opción deseada
    cin >> opcion;
     
    cout << endl;

	//analizamos la variable de opciones
    switch(opcion) {
      case 0:
      	//En caso de salir
        salir = true;
        break;

      case 1:
        sumar();
        break;

      case 2:
        restar();
        break;

      case 3:
        multiplicar();
        break;

      case 4:
        dividir();
		break;

      default:
        cout << "ERROR: Esta opcion no es valida." << endl;
        break;
    }
    
  }

  cout << "Saliendo, presiona cualquier tecla para continuar..." << endl;
  getch();

}

//definimos las funciones...
void sumar() {
    double num1, num2, resultado;

	cout << "*** sumando ***" << endl
		 << endl;
		 
	cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;
    
    cout << "El resultado es: " << (num1 + num2) << endl
         << endl;
  
}

void restar() {
  double num1, num2, resultado;

	cout << "*** restando ***" << endl
		 << endl;
  	cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;
    
    cout << "El resultado es: " << (num1 - num2) << endl 
             << endl;
  
}

void multiplicar() {
  double num1, num2, resultado;

	cout << "*** multiplicando ***" << endl
		 << endl;
  	cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;
    
    cout << "El resultado es: " << (num1 * num2) << endl 
             << endl;
  
}

void dividir() {
  double num1, num2, resultado;

	cout << "*** dividiendo ***" << endl
		 << endl;
  	cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;
    
    cout << "El resultado es: " << (num1 / num2) << endl 
             << endl;
  
}
