#include <iostream>
#include <memory>

int main()
{
	std::shared_ptr<int> p1(new int{ 123 });
	std::shared_ptr<int> p2 = p1;
	std::shared_ptr<int> p3 = p1;
} // when the last shared pointer goes out of scope, the memory gets deallocated