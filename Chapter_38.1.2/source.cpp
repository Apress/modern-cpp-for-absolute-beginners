#include <iostream>
#include <array>

int main()
{
	std::array<int, 5> arr = { 1, 2, 3, 4, 5 };
	for (auto el : arr)
	{
		std::cout << el << '\n';
	}
}