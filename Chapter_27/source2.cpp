#include <iostream>

class MyClass
{
public:
	static int x; // declare a static data member
};

int MyClass::x = 123; // define a static data member

int main()
{
	MyClass::x = 456; // access a static data member
	std::cout << "Static data member value is: " << MyClass::x;
}