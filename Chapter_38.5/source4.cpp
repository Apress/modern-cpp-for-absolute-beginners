#include <iostream>

int main()
{
	auto mylambda = []() {std::cout << "Hello from a lambda"; };
	mylambda();
}