#include <iostream>
#include <string>

int main()
{
	try
	{
		throw 123;
		// the following will not execute as
		// the control has been transferred to a catch clause
		throw std::string{ "Some string error" };
	}
	catch (int e)
	{
		std::cout << "Integer exception raised! The value is " << e << '\n';
	}
	catch (const std::string& e)
	{
		// catch and handle the exception
		std::cout << "String exception raised!." << '\n';
		std::cout << "The exception has a value of: " << e << '\n';
	}
}