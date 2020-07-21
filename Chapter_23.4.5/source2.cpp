#include <iostream>
#include <string>

class MyClass
{
private:
	int x;
	std::string s;
public:
	MyClass(int xx, std::string ss) // user provided constructor
		: x{ xx }, s{ ss }
	{}

	MyClass(MyClass&& rhs) // move constructor
		:
		x{ std::move(rhs.x) }, s{ std::move(rhs.s) }
	{
		std::cout << "Move constructor invoked." << '\n';
	}
};

int main()
{
	MyClass o1{ 1, "Some string value" };
	MyClass o2 = std::move(o1);
}