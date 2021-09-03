#include <cstdio>

// Determine if a number is positiv, zero or negative.

int step_function(int num){
	int result = 0;  // if not chance is zero.
  
	if(num > 0)
		result = 1;  // is positive.
	else if(num < 0)
    	result = -1; // is negative.
  
  return result;   
}

int main(){
	int numA = 100;
	int numB = -30;
	int numC = 0;
	
	printf("NumA: %d \n", step_function(numA));
	printf("NumB: %d \n", step_function(numB));
	printf("NumC: %d \n", step_function(numC));
}
