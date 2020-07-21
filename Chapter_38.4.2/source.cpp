#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 5, 2, 15, 3, 10 };
	auto result = std::find(v.begin(), v.end(), 5);

	if (result!=v.end())
	{
		std::cout << "Element found: " << *result;
	}
	else
	{
		std::cout << "Element not found.";
	}
}