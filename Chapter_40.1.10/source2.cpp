#include <iostream>
#include <unordered_map>

int main()
{
	std::unordered_map<char, int> myunorderedmap = { {'a', 1}, {'b', 2}, {'c', 5} };
	myunorderedmap.insert({ 'd', 10 });
	
	for (auto el : myunorderedmap)
	{
		std::cout << el.first << ' '<< el.second << '\n';
	}
}