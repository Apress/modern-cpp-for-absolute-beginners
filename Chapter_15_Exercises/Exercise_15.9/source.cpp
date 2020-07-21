#include <iostream>

int main()
{
	auto c = 'a';
	auto x = 123;
	auto d = 3.14;

	std::cout << "The type of c is deduced as char, the value is: " << c << '\n';
	std::cout << "The type of x is deduced as int, the value is: " << x << '\n';
	std::cout << "The type of d is deduced as double, the value is: " << d << '\n';
}