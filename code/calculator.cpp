#include <cstdio>

enum class Operation{
	Add,
	Subtract,
	Multiply,
	Divide
};

struct Calculator{
	Operation operation;
	
	Calculator(Operation operation){
		this->operation = operation;
	}
	
	float calculate(float a, float b){
		switch(operation){
			case Operation::Add:{
				return a+b;
				break;
			}
			case Operation::Subtract:{
				return a-b;
				break;
			}
			case Operation::Multiply:{
				return a*b;
				break;
			}
			case Operation::Divide:{
				return a/b;
				break;
			}
		}
	}
};

main(){
	Calculator calculator{Operation::Add};
	
	float num1{10};
	float num2{30};
	
	printf("%f + %f = %f\n", num1, num2,
						calculator.calculate(num1, num2));
				
	calculator.operation = Operation::Subtract;		
	printf("%f - %f = %f\n", num1, num2,
						calculator.calculate(num1, num2));
						
	calculator.operation = Operation::Multiply;					
	printf("%f * %f = %f\n", num1, num2,
						calculator.calculate(num1, num2));
	
	calculator.operation = Operation::Divide;
	printf("%f / %f = %f\n", num1, num2,
						calculator.calculate(num1, num2));
}
