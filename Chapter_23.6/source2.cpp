#include <iostream>

class MyClass
{
private:
	int* p;
public:

	MyClass()
		: p{ new int{123} }
	{
		std::cout << "Created a pointer in the constructor." << '\n';
	}
	~MyClass()
	{
		delete p;
		std::cout << "Deleted a pointer in the destructor." << '\n';
	}
};

int main()
{
	MyClass o; // constructor invoked here
} // destructor invoked here