#include <iostream>
#include <span>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	std::span<int, 5> myintspan = arr;
	myintspan[4] = 10;

	for (auto el : arr)
	{
		std::cout << el << '\n';
	}
}