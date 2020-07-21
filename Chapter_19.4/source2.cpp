#include <iostream>

int intfn();

int main()
{
	std::cout << "The value of a function is: " << intfn();
}

int intfn()
{
	return 42; // return statement
}