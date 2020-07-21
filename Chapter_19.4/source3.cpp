#include <iostream>

int multiplereturns(int x);

int main()
{
	std::cout << "The value of a function is: " << multiplereturns(25);
}

int multiplereturns(int x)
{
	if (x >= 42)
	{
		return x;
	}
	return 0;
}