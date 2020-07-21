#include <iostream>
#include <memory>

int main()
{
	std::unique_ptr<int> p = std::make_unique<int>(123);
	std::cout << "The value of a pointed-to object is: " << *p << '\n';
}