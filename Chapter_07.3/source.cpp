#include <iostream>

int main()
{
	int x = 123;
	x += 10;	// the same as x = x + 10
	x -= 10;	// the same as x = x - 10
	x *= 2;		// the same as x = x * 2
	x /= 3;		// the same as x = x / 3
	std::cout << "The value of x is: " << x;
}