#include <cstdio>

#include <chrono>
#include <thread>

//The individual element in a Stack
struct Element {
	int value;
	Element* next{};
};

//The container for individual items
struct Stack {
	//init to NULL
	Element* top_el{};

	int push(int value) {
		//make space for a new Element and get a pointer
		Element* new_el = new Element();

		//asign the value to new Element
		new_el->value = value;

		//move top_el to the next position in stack
		new_el->next = top_el;

		//change position, new_el is the new top_element
		top_el = new_el;

		//for printing purpouse, return the value of top_el
		return top_el->value;
	}

	int pop() {
		if(!isEmpty()) {
			auto value = top_el->value;
			top_el = top_el->next;

			return value;	
		}
		//TO-DO: Implement some error message
		return 0;
	}

	bool isEmpty() {
		//if the top element is equal to NULL, the stack is empty
		return top_el == NULL;
	}
};

//A function for stop the program for x sencods
void sleep(int sec) {
	std::chrono::milliseconds timespan(1000 * sec);
	std::this_thread::sleep_for(timespan);
}

void sleepForHalfSec() {
	std::chrono::milliseconds timespan(500);
	std::this_thread::sleep_for(timespan);
}

int main() {
	printf("A stack exercies \n");

	Stack myStack{};

	printf("Start pushing: %d", myStack.push(0));
	for (auto i = 1; i <= 10; i++) {
		printf(" %d", myStack.push(i));
		sleepForHalfSec();
	}

	printf("\n");
	printf("Start poping: ");
	while (!myStack.isEmpty()) {
		printf("%d ", myStack.pop());
		sleep(1);
	}
}