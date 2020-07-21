#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, int> mymap = { {"red", 1}, {"green", 20}, {"blue", 15} };
	mymap.insert({ "magenta", 4 });
	mymap["yellow"] = 5;

	for (const auto& el : mymap)
	{
		std::cout << el.first << ' ' << el.second << '\n';
	}
}