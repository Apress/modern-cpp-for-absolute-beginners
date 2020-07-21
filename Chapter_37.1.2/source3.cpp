#include <iostream>
#include <sstream>

int main()
{
	std::stringstream ss;
	ss << "Hello World.";
	std::cout << ss.str();
}