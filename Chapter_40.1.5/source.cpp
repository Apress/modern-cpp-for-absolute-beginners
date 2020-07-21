#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	auto counteven = std::count_if(std::begin(v), std::end(v), 
		[](int x) {return x % 2 == 0; }); // lambda expression
	std::cout << "The number of even vector elements is: " << counteven;
}