#include <iostream>

int main()
{
	int x = 10;
	if (x > 5)
	{
		std::cout << "The value of x is greater than 5.";
	}
	if (x >= 10)
	{
		std::cout << "\nThe value of x is greater than or equal to 10.";
	}
	if (x != 20)
	{
		std::cout << "\nThe value of x is not equal to 20.";
	}
	if (x == 20)
	{
		std::cout << "\nThe value of x is equal to 20.";
	}
}