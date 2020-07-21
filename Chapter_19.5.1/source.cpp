#include <iostream>

void myfunction(int byvalue)
{
	std::cout << "Argument passed by value: " << byvalue;
}

int main()
{
	myfunction(123);
}