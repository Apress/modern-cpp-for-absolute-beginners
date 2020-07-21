#include <iostream>
#include <map>

int main()
{
	std::map<char, int> mymap = { {'a', 1}, {'b', 5}, {'e', 10}, {'f', 10} };
	for (auto el : mymap)
	{
		std::cout << el.first << ' ' << el.second << '\n';
	}
}