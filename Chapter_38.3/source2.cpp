#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	auto it = v.begin() + 3;
	v.erase(it);

	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}