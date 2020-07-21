#include <iostream>
#include <string>

int main()
{
	std::string s1 = "Hello";
	std::string s2 = "World.";
	if (s1 == s2)
	{
		std::cout << "The strings are equal.";
	}
	else
	{
		std::cout << "The strings are not equal.";
	}
}