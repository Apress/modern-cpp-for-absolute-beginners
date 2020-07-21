#include <iostream>

template <typename T>
void myfunction(T param)
{
	std::cout << "The value of a parameter is: " << param;
}

int main()
{
	myfunction<int>(123);
	myfunction<double>(123.456);
	myfunction<char>('A');
}