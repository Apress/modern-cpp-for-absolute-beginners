#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 5, 10, 4, 1, 3, 8 };
	int mycount = std::count_if(std::begin(v), std::end(v), [](int x) {return x % 2 == 0; });
	std::cout << "The number of even numbers is: " << mycount;
}