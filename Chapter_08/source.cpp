#include <iostream>

int main()
{
	std::cout << "Please enter two numbers separated by a space and press enter: ";
	int x = 0;
	int y = 0;
	std::cin >> x >> y;
	std::cout << "You entered: " << x << " and " << y;
}