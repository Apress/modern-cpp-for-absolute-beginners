#include <iostream>

int main()
{
	int x = 256;
	if (x > 100 && x < 300)
	{
		std::cout << "The value is greater than 100 and less than 300." << '\n';
	}
	else
	{
		std::cout << "The value is not inside the (100 .. 300) range." << '\n';
	}

	bool mycondition = true;
	if (x > 100 || mycondition)
	{
		std::cout << "Either x is greater than 100 or the bool variable is true." << '\n';
	}
	else
	{
		std::cout << "X is not greater than 100 and the bool variable is false." << '\n';
	}

	bool mysecondcondition = !mycondition;
}