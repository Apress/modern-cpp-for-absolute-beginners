#include <iostream>
#include <any>

int main()
{
	std::any a = 123;
	std::cout << "Any accessed as an integer: " << std::any_cast<int>(a) << '\n';
	a = 456.789;
	std::cout << "Any accessed as a double: " << std::any_cast<double>(a) << '\n';
	a = true;
	std::cout << "Any accessed as a boolean: " << std::any_cast<bool>(a) << '\n';
}