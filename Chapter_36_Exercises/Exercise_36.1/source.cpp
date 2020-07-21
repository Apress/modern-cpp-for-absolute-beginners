#include <iostream>

int main()
{
	int x = 123;
	double d = 456.789;
	bool b = true;

	double doubleresult = static_cast<double>(x);
	std::cout << "Int to double: " << doubleresult << '\n';

	int intresult = static_cast<int>(d); // double to int
	std::cout << "Double to int: " << intresult << '\n';

	bool boolresult = static_cast<bool>(x); // int to bool
	std::cout << "Int to bool: " << boolresult << '\n';
}