#include <iostream>
#include <set>

int main()
{
	std::set<int> myset = { -10, 1, 3, 5, -20, 6, 9, 15 };
	for (auto el : myset)
	{
		std::cout << el << '\n';
	}
}