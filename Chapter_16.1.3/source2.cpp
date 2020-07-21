#include <iostream>

int main()
{
	bool a = false;
	bool b = false;
	if (a || b)
	{
		std::cout << "The entire condition is true.";
	}
	else
	{
		std::cout << "The entire condition is false.";
	}
}