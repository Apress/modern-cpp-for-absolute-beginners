#include <iostream>
#include <ranges>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	auto oddandgreaterthan2 = v | std::views::filter([](int x) { return x % 2 == 1; })
								 | std::views::filter([](int x) { return x > 2; });
	for (auto el : oddandgreaterthan2)
	{
		std::cout << el << '\n';
	}
}