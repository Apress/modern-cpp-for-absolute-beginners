#include <iostream>

void myfunction(); // function declaration

int main()
{
	myfunction(); // a call to a function
}

// function definition
void myfunction() {
	std::cout << "Hello World from a function.";
}