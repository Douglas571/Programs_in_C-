#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){	
	int total = 10;
	int sum = 0;
	printf("How much numbers you want to sume (default=10): ");
	scanf("%d", &total);
	
	int i;
	while (i <= total){
		sum += i;
		i++;
	}
	
	printf("The sume of %d firsth positive numbers are: %d\n", total, sum);
	printf("Press any key to continue...");
	getch();
	return 0;
}
