#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cout << "Please enter a string: ";
	std::getline(std::cin, s);
	std::cout << "You entered: " << s;
}