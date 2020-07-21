#include <iostream>
#include <string>

int main()
{
	std::string s = "Hello C++ World.";
	char c = 'C';
	auto characterfound = s.find(c);
	if (characterfound != std::string::npos)
	{
		std::cout << "Character found at position: " << characterfound << '\n';
	}
	else
	{
		std::cout << "Character was not found." << '\n';
	}
}