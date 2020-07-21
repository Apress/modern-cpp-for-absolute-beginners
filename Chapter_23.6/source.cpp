#include <iostream>

class MyClass
{
public:
	MyClass() {}	// constructor
	~MyClass()
	{
		std::cout << "Destructor invoked.";
	}	// destructor
};

int main()
{
	MyClass o;
}	// destructor invoked here, when o gets out of scope