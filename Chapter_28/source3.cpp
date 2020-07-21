#include <iostream>

template <typename T, typename U>
void myfunction(T t, U u)
{
	std::cout << "The first parameter is: " << t << '\n';
	std::cout << "The second parameter is: " << u << '\n';
}

int main()
{
	int x = 123;
	double d = 456.789;
	myfunction<int, double>(x, d);
}