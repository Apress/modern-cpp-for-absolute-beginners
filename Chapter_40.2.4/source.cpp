#include <iostream>

int main()
{
	auto mylambda = [](auto p) {std::cout << "Lambda parameter: " << p << '\n'; };
	mylambda(123);
	mylambda(3.14);
}