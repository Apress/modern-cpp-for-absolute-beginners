#include <iostream>

int main()
{
	try
	{
		std::cout << "Let's assume some error occurred in our program." << '\n';
		std::cout << "We throw an exception of type int, for example." << '\n';
		std::cout << "This signals that something went wrong." << '\n';
		throw 123;	// throw an exception if there is an error
	}
	catch (int e)
	{
		// catch and handle the exception
		std::cout << "Exception raised!." << '\n';
		std::cout << "The exception has a value of " << e <<  '\n';
	}
}