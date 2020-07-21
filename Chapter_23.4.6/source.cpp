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

	MyClass& operator=(MyClass&& otherobject) // move assignment operator
	{
		x = std::move(otherobject.x);
		s = std::move(otherobject.s);
		return *this;
	}
};

int main()
{
	MyClass o1{ 123, "This is currently in object 1." };
	MyClass o2{ 456, "This is currently in object 2." };
	o2 = std::move(o1); // move assignment operator invoked
	std::cout << "Move assignment operator used.";
}