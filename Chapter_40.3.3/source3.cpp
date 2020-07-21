#include <iostream>

int main()
{
	int arr[] = { 1, 2, 3 };
	auto& [myvar1, myvar2, myvar3] = arr;
	myvar1 = 10;
	myvar2 = 20;
	myvar3 = 30;
	for (auto el : arr)
	{
		std::cout << el << ' ';
	}
}