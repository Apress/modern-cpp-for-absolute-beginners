#include <iostream>

int main()
{
	std::cout << "Please enter a char, an int and a double: ";
	char c;
	int x;
	double d;
	std::cin >> c >> x >> d;
	std::cout << "You entered: " << c << ", " << x << ", and " << d;
}