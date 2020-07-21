#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30 };
	auto counteven = std::count_if(std::begin(v), std::end(v), 
		[](int x) {return x % 2 == 0; });
	std::cout << "The number of even vector elements is: " << counteven;
}