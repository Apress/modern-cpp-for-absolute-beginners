#include <iostream>

void mychoice(int i)
{
	switch (i)
	{
	[[likely]] case 1:
		std::cout << "Likely to be executed.";
		break;
	[[unlikely]] case 2:
		std::cout << "Unlikely to be executed.";
		break;
	default:
		break;
	}
}
int main()
{
	mychoice(1);
}