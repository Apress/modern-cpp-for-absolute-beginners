#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> v = { "Hello", "World,", "C++"};
	v.push_back("Is great!");

	for (const auto& el : v)
	{
		std::cout << el << '\n';
	}
}