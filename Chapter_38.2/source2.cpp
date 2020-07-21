#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	v.push_back(10);

	for (int& el : v)
	{
		std::cout << el << '\n';
	}
}