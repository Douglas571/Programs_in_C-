#include <cstdio>

enum class Operation {
	Add,
	Subtract,
	Multiply,
	Divide
};

class Calculator {
  Operation operation;

  char getSign(){
    switch ( this -> operation ) {
      case Operation::Add: {
        return '+';
      } break;

      case Operation::Subtract: {
        return '-';
      } break;

      case Operation::Multiply: {
        return 'x';
      } break;

      case Operation::Divide: {
        return '/';
      } break;

      default: {
        return 'N';
      } break;
    }
  }
public:
	Calculator( Operation operation ) {
		this -> operation = operation;
	}
	int calculate( int numberOne, int numberTwe ) {
    int result = 0;

		switch ( operation ) {
			case Operation::Add: {
				result = numberOne + numberTwe;
			} break;

			case Operation::Subtract: {
				result = numberOne - numberTwe;
			} break;

      case Operation::Multiply: {
        result = numberOne * numberTwe;
      } break;

      case Operation::Divide: {
        result = numberOne / numberTwe;
      }

			default: {
				return 0;	
			} break;

      return result;
		}
	}

  void print( int numberOne, int numberTwe ){
    printf("%d %c %d = %d\n", 
      numberOne,
      this -> getSign(), 
      numberTwe, 
      this -> calculate( numberOne, numberTwe ));
  }

  void changeOperation( Operation newOperation ) {
    this -> operation = newOperation;
  }
};

void printASerie( int numberOne, int numberTwe ) {

  printf( "A Serie...\n" );

  // Add
  Calculator calculator{Operation::Add};
  calculator.print( numberOne, numberTwe );

  // Subtract
  calculator.changeOperation( Operation::Subtract );
  calculator.print( numberOne, numberTwe );
  
  // Multiply
  calculator.changeOperation( Operation::Multiply );
  calculator.print( numberOne, numberTwe );
  
  // Divide
  calculator.changeOperation( Operation::Divide );
  calculator.print( numberOne, numberTwe );

  printf("\n");
}

int main(){

  int numberOne = 1;
  int numberTwe = 2;

  printASerie( numberOne, numberTwe );

  numberOne = 3;
  numberTwe = 4;
  printASerie( numberOne, numberTwe );

  numberOne = 5;
  numberTwe = 6;
  printASerie( numberOne, numberTwe );

  numberOne = 7;
  numberTwe = 8;
  printASerie( numberOne, numberTwe );

	return 0;
}
