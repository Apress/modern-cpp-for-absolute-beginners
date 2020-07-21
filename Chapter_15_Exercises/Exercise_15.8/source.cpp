#include <iostream>
#include <string>

int main()
{
	std::string s = "Hello C++ World.";
	std::string mysubstring = "C++";
	auto mysubstringfound = s.find(mysubstring);
	if (mysubstringfound != std::string::npos)
	{
		std::cout << "Substring found at position: " << mysubstringfound << '\n';
	}
	else
	{
		std::cout << "Substring was not found." << '\n';
	}
}