#include <iostream>

int main()
{
	int* p = new int;
	*p = 123;
	std::cout << "The pointed-to value is: " << *p;
	delete p;
}