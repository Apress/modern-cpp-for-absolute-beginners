#include <iostream>
#include <any>

int main()
{
	std::any a = 123;
	if (a.has_value())
	{
		std::cout << "Object a contains a value." << '\n';
	}
	
	std::any b{};
	if (b.has_value())
	{
		std::cout << "Object b contains a value." << '\n';
	}
	else
	{
		std::cout << "Object b does not contain a value." << '\n';
	}
}