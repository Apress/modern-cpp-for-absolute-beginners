#include <iostream>
#include <unordered_set>

int main()
{
	std::unordered_set<int> myunorderedset = { 1, 2, 5, -4, 7, 10 };
	myunorderedset.erase(-4); // erase a single value
	for (auto el : myunorderedset)
	{
		std::cout << el << '\n';
	}
}