#include <iostream>

int main()
{
	int x = 3;
	switch (x)
	{
	case 1:
		std::cout << "The value is equal to 1." << '\n';
		break;
	case 2:
		std::cout << "The value is equal to 2." << '\n';
		break;
	case 3:
		std::cout << "The value is equal to 3." << '\n';
		break;
	case 4:
		std::cout << "The value is equal to 4." << '\n';
		break;
	default:
		std::cout << "The value is not inside the [1..4] range." << '\n';
		break;
	}
}