#include <iostream>
#include <string>

int main()
{
	std::string s = "This is a Hello World string.";
	std::string stringtofind = "Hello";
	std::string::size_type found = s.find(stringtofind);
	if (found != std::string::npos)
	{
		std::cout << "Substring found at position: " << found;
	}
	else
	{
		std::cout << "The substring is not found.";
	}
}