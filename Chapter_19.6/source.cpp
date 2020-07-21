#include <iostream>

void myprint(char param);
void myprint(int param);
void myprint(double param);

int main()
{
	myprint('c');		// calling char overload
	myprint(123);		// calling integer overload
	myprint(456.789);	// calling double overload
}

void myprint(char param)
{
	std::cout << "Printing a character: " << param << '\n';
}

void myprint(int param)
{
	std::cout << "Printing an integer: " << param << '\n';
}

void myprint(double param)
{
	std::cout << "Printing a double: " << param << '\n';
}