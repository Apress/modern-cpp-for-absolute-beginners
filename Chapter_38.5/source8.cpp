#include <iostream>

int main()
{
	int x = 123;
	int y = 456;
	auto mylambda = [&x, &y]() {std::cout << "X is: " << ++x << ", y is: " << ++y; };
	mylambda();
}