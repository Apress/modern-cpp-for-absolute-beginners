#include <iostream>

class MyClass
{
public:
	int x, y;
	MyClass(int xx, int yy)
		: x{ xx }, y{ yy } // member initializer list
	{

	}
};

int main()
{
	MyClass o{ 1, 2 }; // invoke a user-defined constructor
	std::cout << o.x << ' ' << o.y;
}