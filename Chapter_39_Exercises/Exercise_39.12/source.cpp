#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 5, 10, 4, 1, 3, 15 };
	std::sort(std::begin(v), std::end(v), [](int x, int y) {return x > y; });

	for (const auto& el : v)
	{
		std::cout << el << '\n';
	}
}