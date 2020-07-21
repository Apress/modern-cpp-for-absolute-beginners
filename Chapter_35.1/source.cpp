#include <iostream>
#include <memory>

int main()
{
	std::unique_ptr<int> p(new int{ 123 });
	std::cout << *p;
}