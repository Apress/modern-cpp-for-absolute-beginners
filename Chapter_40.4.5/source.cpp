#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::sort(v.begin(), v.end());

	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}