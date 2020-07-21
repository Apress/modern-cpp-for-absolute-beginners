#include <iostream>

int main()
{
	auto mylambda = [](int x, int y)
	{
		std::cout << "The value of x is: " << x << ", y is: " << y; 
	};
	mylambda(123, 456);
}