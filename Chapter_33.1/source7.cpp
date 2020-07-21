#include <iostream>

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr; // pointer to the first array element
	std::cout << *p;
}