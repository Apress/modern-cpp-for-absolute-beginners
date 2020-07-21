#include <iostream>

int main()
{
	int* p = new int{ 123 };
	std::cout << "The value with a dynamic storage duration is: " << *p;
	delete p;
}