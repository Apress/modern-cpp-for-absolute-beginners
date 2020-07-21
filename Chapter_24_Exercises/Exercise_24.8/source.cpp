#include <iostream>

class MyClass
{
private:
	int x;
	double d;
public:
	MyClass(int xx, double dd);	// user-provided constructor
	MyClass(const MyClass& rhs);	// user-defined copy constructor
	void printdata();
};

MyClass::MyClass(int xx, double dd)
	: x{ xx }, d{ dd }
{}

MyClass::MyClass(const MyClass& rhs)
	: x{ rhs.x }, d{ rhs.d }
{}

void MyClass::printdata()
{
	std::cout << "X is: " << x << ", d is: " << d << '\n';
}

int main()
{
	MyClass o1{ 123, 456.789 };	// invokes a user-provided constructor
	MyClass o2 = o1; // invokes a user-defined copy constructor
	o1.printdata();
	o2.printdata();
}