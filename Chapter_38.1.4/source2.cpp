#include <iostream>
#include <map>

int main()
{
	std::map<int, char> mymap = { {1, 'a'}, {2, 'b'}, {3,'z'} };
	for (auto el : mymap)
	{
		std::cout << el.first << ' ' << el.second << '\n';
	}
}