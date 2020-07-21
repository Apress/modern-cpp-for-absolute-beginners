#include <iostream>

int main()
{
	int x = 3;
	switch (x)
	{
	case 1:
		std::cout << "The value of x is 1.";
		break;
	case 2:
		std::cout << "The value of x is 2.";
		break;
	case 3:
		std::cout << "The value of x is 3."; // this statement will be executed
		break;
	default:
		std::cout << "The value is none of the above.";
		break;
	}
}