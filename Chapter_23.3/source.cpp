#include <iostream>

class MyClass
{
public:
	int x;
	void printx()
	{
		std::cout << "The value of data member x is: " << x;
	}
};

int main()
{
	MyClass o;
	o.x = 123;	// x is accessible to object o
	o.printx();	// printx() is accessible to object o
}