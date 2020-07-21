#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string s = "Hello World.";
	std::stringstream ss{ s };
	std::cout << ss.str();
}