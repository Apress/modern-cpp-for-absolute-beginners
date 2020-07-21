#include <iostream>

class MyClass
{
public:
	MyClass();
	~MyClass();
};

MyClass::MyClass()
{
	std::cout << "Constructor invoked." << '\n';
}

MyClass::~MyClass()
{
	std::cout << "Destructor invoked." << '\n';
}

int main()
{
	MyClass o;
}