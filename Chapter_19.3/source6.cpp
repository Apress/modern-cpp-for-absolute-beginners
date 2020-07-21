#include <iostream>

int mysum(int x, int y);

int main()
{
	int myresult = mysum(5, 10);
	std::cout << "The sum of 5 and 10 is: " << myresult;
}

int mysum(int x, int y) {
	return x + y;
}