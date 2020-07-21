#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 10, 5, 8, 4, 1, 2 };
	v.erase(v.begin(), v.begin() + 3); // erase the first 3 elements

	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}