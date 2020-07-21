#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<int, std::string> mymap = { {1, "First"}, {2, "Second"}, {3, "Third"}, {4, "Fourth"} };
	int findbykey = 2;
	auto foundit = mymap.find(findbykey);
	if (foundit != mymap.end())
	{
		std::cout << "Key found." << '\n';
		std::cout << "Deleting the element..." << '\n';
		mymap.erase(foundit);
	}
	else
	{
		std::cout << "Key not found." << '\n';
	}

	for (const auto& el : mymap)
	{
		std::cout << el.first << ' ' << el.second << '\n';
	}
}