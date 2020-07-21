#include <iostream>
#include <vector>
#include <span>

int main()
{
	std::vector<int> v = { 1, 2, 3 };
	std::span<int> myintspan = v;
	myintspan[2] = 256;

	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}