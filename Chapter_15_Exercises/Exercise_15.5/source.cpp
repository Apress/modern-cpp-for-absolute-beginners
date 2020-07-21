#include <iostream>
#include <string>

int main()
{
	std::string fullname;
	std::cout << "Please enter the first and the last name: ";
	std::getline(std::cin, fullname);
	std::cout << "Your name is: " << fullname;
}