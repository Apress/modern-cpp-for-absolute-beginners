#include <iostream>

int main()
{
	int x = 10;
	if (x > 5 && x < 15)
	{
		std::cout << "The value of x is greater than 5 and less than 15.";
	}
	bool b = true;
	if (x > 5 && b)
	{
		std::cout << "\nThe value of x is greater than 5 and b is true.";
	}
}