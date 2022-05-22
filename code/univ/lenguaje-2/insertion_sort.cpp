// ordenar una lista de estudiantes
// por su cedula de identidad

#include <iostream>
#include <string>

using namespace std;

struct Student {
  int cedula;
  string name;
};

int main() {
  // preguntar cuántos estudiantes hay
  int students_num = 3;
  cout << "¿Cuantos estudiantes vas a agregar?: ";
  cin >> students_num;
  
  // pedir los datos de los estudiantes
  Student students[students_num];
  
  for (int i = 0; i < students_num; i++) {
    int cedula = 0;
    string name;
    cout << "estudiante #" << (i+1) << ":" << endl;
    
    cout << "  cedula: ";
    cin >> cedula;
    
    cout << "  nombre: ";
    cin >> name;
    
    /*
    cout << "los datos del estudiante son: " << endl;
    cout << "  cedula: " << cedula << endl;
    cout << "  nombre: " << name << endl;
    */
    
    students[i] = Student{ cedula, name };
  }
  
  // ordenar estudiantes mediante el método de inserción
  for (int i = 0; i < students_num; i++){
    Student temp = students[i];
    int j = i;
    
    while(j>0 && temp.cedula <= students[j-1].cedula){
      students[j] = students[j-1];
      j--;
    }
    students[j] = temp;
  }
  
  cout << endl << "la lista ordenada de estudiantes es: " << endl;
  
  // imprimir los estudiantes de forma ordenada
  for(int i = 0; i < students_num; i++){
    Student s = students[i];
    cout << " - estudiante #" << (i+1) << ": " << endl;
    cout << "   cedula: " << s.cedula << endl;
    cout << "   nombre: " << s.name << endl << endl;
  }
  
  return 0;
}
