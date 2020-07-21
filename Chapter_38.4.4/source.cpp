#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	auto it = std::max_element(std::begin(v), std::end(v));
	std::cout << "The max element in the vector is: " << *it;
}