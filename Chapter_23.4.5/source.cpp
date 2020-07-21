#include <iostream>

class MyClass { };

int main()
{
	MyClass o1;
	MyClass o2 = std::move(o1);
	std::cout << "Move constructor invoked.";
	// or MyClass o2{std::move(o1)};
}
