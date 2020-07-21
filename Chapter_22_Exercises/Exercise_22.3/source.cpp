#include <iostream>

int main()
{
	int x = 123; // automatic storage duration
	std::cout << "The value with an automatic storage duration is: " << x << '\n';
	int* p = new int{ x }; // allocate memory and copy the value from x to it
	std::cout << "The value with a dynamic storage duration is: " << *p << '\n';
	delete p;
} // end of scope here