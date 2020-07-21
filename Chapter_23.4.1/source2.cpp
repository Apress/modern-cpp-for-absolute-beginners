#include <iostream>

class MyClass
{
public:
	MyClass(int x = 123, int y = 456)
	{
		std::cout << "Default constructor invoked." << '\n';
	}
};
int main()
{
	MyClass o; // invoke a default constructor
}