#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 10, 5, 8, 4, 1, 2 };
	v.push_back(15); // insert the value 15
	v.push_back(30); // insert the value of 30

	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}