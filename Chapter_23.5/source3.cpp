#include <iostream>
class MyClass
{
private:
	int x;
	double d;

public:
	MyClass(int xx, double dd)
		: x{ xx }, d{ dd }
	{
	}

	MyClass& operator+=(const MyClass& rhs)
	{
		this->x += rhs.x;
		this->d += rhs.d;
		return *this;
	}
};

int main()
{
	MyClass myobject{ 1, 1.0 };
	MyClass mysecondobject{ 2, 2.0 };
	myobject += mysecondobject;
	std::cout << "Used the overloaded += operator.";
}