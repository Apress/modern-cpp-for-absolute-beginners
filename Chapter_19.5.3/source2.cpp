#include <iostream>
#include <string>

void myfunction(const std::string& byconstreference);

int main()
{
	std::string s = "Hello World!";
	myfunction(s);
}

void myfunction(const std::string& byconstreference)
{
	std::cout << "Arguments passed by const reference: " << byconstreference;
}