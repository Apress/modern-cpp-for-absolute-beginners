#include <iostream>
#include <variant>

int main()
{
	std::variant<char, int, double> myvariant{ 'a' }; // variant now holds a char
	
	std::cout << std::get<0>(myvariant) << '\n'; // obtain a data member by index
	std::cout << std::get<char>(myvariant) << '\n'; // obtain a data member by type

	myvariant = 1024; // variant now holds an int
	std::cout << std::get<1>(myvariant) << '\n'; // by index
	std::cout << std::get<int>(myvariant) << '\n'; // by type

	myvariant = 123.456; // variant now holds a double
}