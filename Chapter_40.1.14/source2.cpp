#include <iostream>

class MyClass
{
public:
	MyClass(const MyClass& other)
	{
		std::cout << "Copy constructor invoked.";
	}
};

int main()
{
	MyClass o; // Error, there is no default constructor
}