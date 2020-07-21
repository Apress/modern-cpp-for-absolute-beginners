#include <iostream>
#include <string>

class MyClass
{
private:
	double d;
	std::string s;
public:
	MyClass(double dd, std::string ss) // user-provided constructor
		: d{ dd }, s{ ss }
	{}

	MyClass(MyClass&& otherobject) // user-defined move constructor
		:
		d{ std::move(otherobject.d) }, s{ std::move(otherobject.s) }
	{
		std::cout << "Move constructor invoked." << '\n';
	}

	void printdata()
	{
		std::cout << "The value of doble is: " << d << ", the value of string is: " << s << '\n';
	}
};

int main()
{
	MyClass o1{ 3.14, "This was in object 1" };
	MyClass o2 = std::move(o1); // invokes the move constructor
	o2.printdata();
}