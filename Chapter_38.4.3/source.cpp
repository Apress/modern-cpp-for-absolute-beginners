#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> copy_from_v = { 1, 2, 3, 4, 5 };
	std::vector<int> copy_to_v(5); // reserve the space for 5 elements

	std::copy(copy_from_v.begin(), copy_from_v.end(), copy_to_v.begin());

	for (auto el : copy_to_v)
	{
		std::cout << el << '\n';
	}
}