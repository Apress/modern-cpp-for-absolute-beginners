#include <iostream>
#include <map>

int main()
{
	std::map<int, char> mymap;
	mymap[1] = 'a';
	mymap[2] = 'b';
	mymap[3] = 'z';

	for (auto el : mymap)
	{
		std::cout << el.first << ' ' << el.second << '\n';
	}
}