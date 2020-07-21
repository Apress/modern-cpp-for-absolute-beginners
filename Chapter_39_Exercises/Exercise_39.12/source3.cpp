#include <iostream>

int main()
{
	int x = 123;
	std::cout << "The value of a local variable is: " << x << '\n';
	auto mylambda = [&x](){ x++; };
	mylambda();
	std::cout << "Lambda captured and changed the local variable to: " << x << '\n';
}