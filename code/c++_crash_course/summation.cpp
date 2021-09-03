#include <cstdio>

int summation(){
	int numberA;
	int numberB;
	int sumAB;
	
	printf("Welcome, this progrman print\n" 
			"the summation of two numbers.\n"
			"\n"
		  );
	
	
	printf("Write a number:");
	scanf("%d", &numberA);
	printf("Write other number:");
	scanf("%d", &numberB);
	
	sumAB = numberA + numberB;
	
	printf("%d + %d = %d \n", numberA,
	                       numberB, 
						   sumAB
	      );
}

int main(){
	summation();
}
