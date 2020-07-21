#include <iostream>

int main()
{
	try
	{
		std::cout << "Throwing an integer exception with value of 123..." << '\n';
		int x = 123;
		throw x;
	}
	catch (int ex)
	{
		std::cout << "An integer exception of value: " << ex << " caught and handled." << '\n';
	}
}