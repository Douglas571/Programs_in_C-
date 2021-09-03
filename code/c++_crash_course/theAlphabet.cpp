#include <cstdio>

int main(){
	char alphabet[27];
	char alphabetUppercase[27];
	
	for(int idx = 0; idx < 26; idx++){
		alphabet[idx] = idx + 97;
		alphabetUppercase[idx] = idx + 65;
	}
	
	alphabet[26] = 0;
	alphabetUppercase[26] = 0;
	
	printf("The english alphabet has:\n");	
	
	int idx   = 0;
	int count = 0;
	int numberOfSets = 5;
	while(idx<26){		
		char set[] = {
						alphabetUppercase[idx],
						45,
						alphabet[idx],
						0
					};
		
		if(count != numberOfSets){
			printf("%s ", set);
			count++;
		}else{
			printf("%s\n", set);
			count=0;
		}
				
		idx++;
		
	}

	
	
}
