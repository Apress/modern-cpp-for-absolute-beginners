#include <iostream>

union MyUnion
{
	char c;		// one byte
	int x;		// four bytes
	double d;	// eight bytes
};

int main()
{
	MyUnion o;
	o.c = 'A';
	std::cout << o.c << '\n';
	// accessing o.x or o.d is undefined behavior at this point
	o.x = 123;
	std::cout << o.c;
	// accessing o.c or o.d is undefined behavior at this point
	o.d = 456.789;
	std::cout << o.c;
	// accessing o.c or o.x is undefined behavior at this point
}