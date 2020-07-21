#include <iostream>
#include <set>

int main()
{
	std::set<int> myset = { -10, 1, 3, 5, 6, 9, 15 };
	myset.insert(-5); // inserts a value of -5
	myset.insert(30); // inserts a value of 30

	myset.erase(6); // deletes a value of 6
	for (auto el : myset)
	{
		std::cout << el << '\n';
	}
}