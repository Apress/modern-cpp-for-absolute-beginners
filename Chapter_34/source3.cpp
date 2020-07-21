#include <iostream>
#include <string>

int main()
{
	try
	{
		std::cout << "Let's assume some error occured in our program." << '\n';
		std::cout << "We throw an exception of type string, for example." << '\n';
		std::cout << "This signals that something went wrong." << '\n';
		throw std::string{ "Some string error" };	// throw an exception if there is an error
	}
	catch (const std::string& e)
	{
		// catch and handle the exception
		std::cout << "String exception raised!." << '\n';
		std::cout << "The exception has a value of: " << e << '\n';
	}
}