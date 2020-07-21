#include <iostream>
#include <ranges>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::ranges::reverse(v);
	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}