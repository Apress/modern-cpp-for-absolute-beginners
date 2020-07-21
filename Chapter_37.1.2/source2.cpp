#include <iostream>
#include <sstream>

int main()
{
	std::stringstream ss{ "Hello world." };
	std::cout << ss.str();
}