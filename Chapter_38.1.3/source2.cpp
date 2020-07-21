#include <iostream>
#include <set>

int main()
{
	std::set<int> myset = { 1, 2, 3, 4, 5 };
	myset.insert(10);
	myset.insert(42);
		for (auto el : myset)
	{
		std::cout << el << '\n';
	}
}