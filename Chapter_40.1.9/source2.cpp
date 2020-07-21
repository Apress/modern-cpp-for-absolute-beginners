#include <iostream>
#include <unordered_set>

int main()
{
	std::unordered_set<int> myunorderedset = { 1, 2, 5, -4, 7, 10 };
	myunorderedset.insert(6); // insert a single value
	myunorderedset.insert({ 8, 15, 20 }); // insert multiple values
	for (auto el : myunorderedset)
	{
		std::cout << el << '\n';
	}
}