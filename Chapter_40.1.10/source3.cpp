#include <iostream>
#include <unordered_map>

int main()
{
	std::unordered_map<char, int> myunorderedmap = { {'a', 1}, {'b', 2}, {'c', 5} };
	myunorderedmap['b'] = 4; // key exists, change the value
	myunorderedmap['d'] = 10; // key does not exist, insert the new element
	for (auto el : myunorderedmap)
	{
		std::cout << el.first << ' ' << el.second << '\n';
	}
}