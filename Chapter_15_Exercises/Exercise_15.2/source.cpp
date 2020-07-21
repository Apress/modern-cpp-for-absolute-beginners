#include <iostream>

int main()
{
	double d = 3.14;
	double* p = &d;
	std::cout << "The value of the pointed-to object is: " << *p;
}