#include <iostream>

class MyClass
{
public:
	MyClass() = default; // defaulted member function
	MyClass(const MyClass& other)
	{
		std::cout << "Copy constructor invoked.";
	}
};

int main()
{
	MyClass o; // Now OK, the defaulted default constructor is there
	MyClass o2 = o; // Invoking the copy constructor
}