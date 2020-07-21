#include <iostream>

int main()
{
	int x = 123;
	auto mylambda = [x]() {std::cout << "The value of x is: " << x; };
	mylambda();
}