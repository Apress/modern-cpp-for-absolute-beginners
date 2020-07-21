#include <iostream>

int main()
{
	bool mycondition = true;
	int x = 0;
	x = (mycondition) ? 1 : 0;
	std::cout << "The value of x is: " << x << '\n';
}