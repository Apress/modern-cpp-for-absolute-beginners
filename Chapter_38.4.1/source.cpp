#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 5, 2, 15, 3, 10 };
	std::sort(v.begin(), v.end());

	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}