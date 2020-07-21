#include <iostream>

int main()
{
	try
	{
		std::cout << "Throwing an int exception..." << '\n';
		throw 123;

		std::cout << "Throwing a double exception..." << '\n';
		throw 456.789;
	}
	catch (int ex)
	{
		std::cout << "Integer exception: " << ex << " caught and handled." << '\n';
	}
	catch (double ex)
	{
		std::cout << "Double exception: " << ex << " caught and handled." << '\n';
	}
}