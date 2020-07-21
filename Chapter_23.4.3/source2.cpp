#include <iostream>

class MyClass
{
private:
	int x;
	int* p;
public:
	MyClass(int xx, int pp)
		: x{ xx }, p{ new int{pp} }
	{
	}

	MyClass(const MyClass& rhs)
		: x{ rhs.x }, p{ new int {*rhs.p} }
	{
		std::cout << "User defined copy constructor invoked.";
	}
};

int main()
{
	MyClass o1{ 1, 2 };
	MyClass o2 = o1; // user defined copy constructor invoked
}