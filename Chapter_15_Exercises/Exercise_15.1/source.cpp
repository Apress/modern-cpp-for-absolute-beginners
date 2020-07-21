#include <iostream>

int main()
{
	double arr[5] = { 1.23, 2.45, 8.52, 6.3, 10.15 };
	arr[0] = 2.56;
	arr[4] = 3.14;
	std::cout << "The first array element is: " << arr[0] << '\n';
	std::cout << "The last array element is: " << arr[4] << '\n';
}