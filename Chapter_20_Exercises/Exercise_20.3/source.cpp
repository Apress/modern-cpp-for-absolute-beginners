#include <iostream>

int multiplication(int x, int y)
{
	return x * y;
}

int main()
{
	int myresult = multiplication(10, 20);
	std::cout << "The result is: " << myresult;
}