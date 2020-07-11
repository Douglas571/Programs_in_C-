#include <cstdio>
#include <cstddef>

int main(){
	size_t sz_c  = sizeof(char);
	size_t sz_s  = sizeof(short);
	size_t sz_i  = sizeof(int);
	size_t sz_l  = sizeof(long);
	size_t sz_ll = sizeof(long long);
	
	printf("char:      %zd \n", sz_c);
	printf("short:     %zd \n", sz_s);
	printf("int:       %zd \n", sz_i);
	printf("long:      %zd \n", sz_l);
	printf("long long: %zd \n", sz_ll);
	
	int ints[10];
	int ints2[100];
	
	size_t size_arr = sizeof(ints);
	size_t size_arr2 = sizeof(ints2);
	
	printf("size of insts [10]:  %zd\n", size_arr);
	printf("size of insts [100]: %zd\n", size_arr2);
}
