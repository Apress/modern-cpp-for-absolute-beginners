#include <iostream>
#include <string>

int division(int x, int y)
{
	return x / y;
}

double division(double x, double y)
{
	return x / y;
}

int main()
{
	std::cout << "Integer division: " << division(9, 2) << '\n';
	std::cout << "Floating point division: " << division(9.0, 2.0);
}