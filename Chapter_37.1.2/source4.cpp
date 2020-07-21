#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::stringstream ss{ "Hello World from a string stream." };
	std::string s = ss.str();
	std::cout << s;
}