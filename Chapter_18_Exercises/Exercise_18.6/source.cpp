#include <iostream>

int main()
{
	const int c1 = 123;
	const double d = 456.789;
	const std::string s = "Hello World!";
	const int c2 = c1;

	std::cout << "Constant integer c1 value: " << c1 << '\n';
	std::cout << "Constant double d value: " << d << '\n';
	std::cout << "Constant std::string s value: " << s << '\n';
	std::cout << "Constant integer c2 value: " << c2 << '\n';
}