#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 10, 5, 8, 4, 1, 2 };
	v.erase(v.begin() + 1); // erase the second element which is 5

	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}