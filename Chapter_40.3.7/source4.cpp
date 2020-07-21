#include <iostream>
#include <variant>

int main()
{
	std::variant<int, double> myvariant{ 123 }; // variant now holds an int
	std::cout << "Current variant: " << std::get<int>(myvariant) << '\n';

	try
	{
		std::cout << std::get<double>(myvariant) << '\n'; // exception is raised
	}
	catch (const std::bad_variant_access& ex)
	{
		std::cout << "Exception raised. Description: " << ex.what();
	}
}