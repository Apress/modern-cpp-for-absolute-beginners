#include <iostream>
#include <memory>

int main()
{
	std::unique_ptr<int> p = std::make_unique<int>(123);
	std::cout << *p;
}