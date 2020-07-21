#include <iostream>
#include <ranges>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	auto oddnumbersview = v | std::views::filter([](int x) { return x % 2 == 1; });
	for (auto el : oddnumbersview)
	{
		std::cout << el << '\n';
	}
}