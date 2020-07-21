#include <iostream>

class MyClass
{
public:
	MyClass()
	{
		std::cout << "Default constructor invoked.";
	}
	MyClass(const MyClass& other) = delete; // delete the copy constructor
	MyClass& operator=(const MyClass& other) = delete; // delete the copy assignment operator
};

int main()
{
	MyClass o; // OK
	MyClass o2 = o; // Error, a call to deleted copy constructor
	MyClass o3;
	o3 = o; // Error, a call to deleted copy assignment operator
}