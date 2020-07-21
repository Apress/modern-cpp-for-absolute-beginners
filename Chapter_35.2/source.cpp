#include <iostream>
#include <memory>

int main()
{
	std::shared_ptr<int> p1 = std::make_shared<int>(123);
	std::shared_ptr<int> p2 = p1;
	std::shared_ptr<int> p3 = p1;
}