#include <iostream>

class MyClass
{
private:
	int x, y;
public:
	MyClass(int xx, int yy) : x{ xx }, y{ yy }
	{
	}

	// user defined copy constructor
	MyClass(const MyClass& rhs)
		: x{ rhs.x }, y{ rhs.y } // initialize members with other object's members
	{
		std::cout << "User defined copy constructor invoked.";
	}
};

int main()
{
	MyClass o1{ 1, 2 };
	MyClass o2 = o1; // user defined copy constructor invoked
}