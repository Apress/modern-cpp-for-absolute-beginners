#include <iostream>

int mysquarednumber(int x); // function declaration

int main()
{
	int myresult = mysquarednumber(2); // a call to the function
	std::cout << "Number 2 squared is: " << myresult;
}

// function definition
int mysquarednumber(int x) {
	return x * x;
}