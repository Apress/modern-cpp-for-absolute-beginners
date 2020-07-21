#include <iostream>
#include <ranges>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	auto greaterthan2view = v | std::views::filter([](int x) { return x > 2; });
	for (auto el : greaterthan2view)
	{
		std::cout << el << '\n';
	}
}