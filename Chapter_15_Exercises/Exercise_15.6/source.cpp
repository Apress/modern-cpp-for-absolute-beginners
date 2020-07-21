#include <iostream>
#include <iostream>

int main()
{
	std::string fullname = "John Doe";
	std::string firstname = fullname.substr(0, 4);
	std::string lastname = fullname.substr(5, 3);
	std::cout << "The full name is: " << fullname << '\n';
	std::cout << "The first name is: " << firstname << '\n';
	std::cout << "The last name is: " << lastname << '\n';
}