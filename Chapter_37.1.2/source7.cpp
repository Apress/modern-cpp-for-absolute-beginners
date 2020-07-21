#include <iostream>
#include <sstream>

int main()
{
	char c = 'A';
	int x = 123;
	double d = 456.78;
	std::stringstream ss;
	ss << "The char is: " << c << ", int is: "<< x << " and double is: " << d;
	std::cout << ss.str();
}