#include <stdio.h>
using namespace std;

int main(int argc, char **argv){
	
	printf("There are %d argument(s)\n", argc);
	for (int i = 0; i < argc; i++){	
		printf("arg[%d] = %s\n", i, argv[i]);
	}
	
	int age = -1;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age == -1){
		printf("error: invalid age");
		return 1;	
	}
	
	printf("Your age is: %d", age);
	return 0;	
	
		
}
	
