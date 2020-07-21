#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	std::vector<int> v = { 1, 5, 2, 15, 3, 10 };
	auto result = std::find(std::begin(v), std::end(v), 5);

	if (result!=std::end(v))
	{
		std::cout << "Element found: " << *result;
	}
	else
	{
		std::cout << "Element not found.";
	}
}