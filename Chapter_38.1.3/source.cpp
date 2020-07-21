#include <iostream>
#include <set>

int main()
{
	std::set<int> myset = { 1, 2, 3, 4, 5 };
	for (auto el : myset)
	{
		std::cout << el << '\n';
	}
}