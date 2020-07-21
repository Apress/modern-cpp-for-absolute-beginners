#include <iostream>
#include <memory>

int main()
{
	std::unique_ptr<int> p(new int{ 123 });
	std::cout << *p;
} // p goes out of scope here, the memory gets deallocated, the object gets destroyed