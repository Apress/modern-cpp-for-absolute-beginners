#include <iostream>

template <typename T>
void myfunction(T arg)
{
	std::cout << "The value of an argument is: " << arg << '\n';
}

template <>
// the rest of our code
void myfunction(int arg)
{
	std::cout << "This is a specialization int. The value is: " << arg << '\n';
}

int main()
{
	myfunction<char>('A');
	myfunction<double>(345.678);
	myfunction<int>(123); // invokes specialization
}