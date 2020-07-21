#include <iostream>

class MyClass
{
public:
	int x, y;
	MyClass(int xx, int yy)
	{
		x = xx;
		y = yy;
	}
};
int main()
{
	MyClass o{ 1, 2 }; // invoke a user-provided constructor
	std::cout << "User-provided constructor invoked." << '\n';
	std::cout << o.x << ' ' << o.y;
}