#include <iostream>
#include <string>

void myfunction(const std::string& byconstreference)
{
	std::cout << "Arguments passed by const reference: " << byconstreference;
}

int main()
{
	std::string s = "Hello World!";
	myfunction(s);
}