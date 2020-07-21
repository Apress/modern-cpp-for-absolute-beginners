#include <iostream>

class MyClass
{
public:
	MyClass()
	{
		std::cout << "Default constructor invoked." << '\n';
	}
};
int main()
{
	MyClass o; // invoke a default constructor
}