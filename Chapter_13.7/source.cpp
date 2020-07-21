#include <iostream>
#include <string>

int main()
{
	std::string s = "Hello World.";
	std::string mysubstring = s.substr(6, 5);
	std::cout << "The substring value is: " << mysubstring;
}