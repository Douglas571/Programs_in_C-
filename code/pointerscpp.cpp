#include <cstdio>

main(){
	int gettysburg{1735};
	int* gettysburg_address = &gettysburg;
	
	printf("The gettysburg value is: %d\n", gettysburg);
	printf("The address is: %p\n", gettysburg_address);
	
	*gettysburg_address = 2020;
	printf("The gettysburg value is: %d\n", gettysburg);
	printf("The address is: %p\n", gettysburg_address);
}
