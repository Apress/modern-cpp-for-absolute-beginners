#include <iostream>
#include <sstream>
#include <string>

int main()
{
	std::string s = "A 123 456.78";
	std::stringstream ss{ s };
	char c;
	int x;
	double d;
	ss >> c >> x >> d;
	std::cout << c << ' ' << x << ' ' << d << ' ';
}