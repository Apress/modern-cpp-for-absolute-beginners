#include <iostream>
#include <sstream>

int main()
{
	char c = 'A';
	int x = 123;
	double d = 456.78;
	std::stringstream ss;
	ss << c << x << d;
	std::cout << ss.str();
}