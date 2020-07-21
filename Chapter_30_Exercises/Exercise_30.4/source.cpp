#include <iostream>

template <typename T>
T mysum(T x, T y)
{
	return x + y;
}

int main()
{
	int intresult = mysum<int>(10, 20);
	std::cout << "The integer sum result is: " << intresult << '\n';
	double doubleresult = mysum<double>(123.456, 789.101);
	std::cout << "The double sum result is: " << doubleresult << '\n';
}