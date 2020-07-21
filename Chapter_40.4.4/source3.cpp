#include <iostream>

int main()
{
	bool choice = true;
	if (choice) [[likely]]
	{
		std::cout << "This statement is likely to be executed.";
	}
	else [[unlikely]]
	{
		std::cout << "This statement is unlikely to be executed.";
	}
}