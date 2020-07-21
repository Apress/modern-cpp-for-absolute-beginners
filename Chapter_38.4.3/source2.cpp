#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> copy_from_v = { 1, 2, 3, 4, 5 };
	std::vector<int> copy_to_v(3);

	std::copy(copy_from_v.begin(), copy_from_v.begin() + 3, copy_to_v.begin());

	for (auto el : copy_to_v)
	{
		std::cout << el << '\n';
	}
}