#include <iostream>
#include <ranges>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 3, 5, 2, 1, 4 };
	std::ranges::sort(v);

	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}