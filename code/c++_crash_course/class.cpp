#include <cstdio>

struct Book{
	
	Book(char name[256],int year){
		setName(name);
		setYear(year);
	}
	
	void setName(char nameIn[]){
		name = nameIn;
	}
	
	char getName(){
		return name;
	}
	
	void setYear(int yearIn){
		year = yearIn;
	}
	
	int getYear(){
		return year;
	}
	
	private:
		char name[256];	
		int year;
		
};

int main(){
	Book book {"neuromancer", 1890};
	printf("Book:\n"
			"%s\n"
			"%d\n", book.getName(),
					book.getYear());
}
