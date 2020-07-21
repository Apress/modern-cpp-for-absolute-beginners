#include <iostream>

void myfunction(int arg[])
{
	std::cout << arg;
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	myfunction(arr);
}