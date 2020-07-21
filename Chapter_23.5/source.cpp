#include <iostream>
class MyClass
{
private:
	int x;
	double d;

public:
	MyClass()
		: x{ 0 }, d{ 0.0 }
	{
	}

	// prefix operator ++
	MyClass& operator++()
	{
		++x;
		++d;
		std::cout << "Prefix operator ++ invoked." << '\n';
		return *this;
	}
};

int main()
{
	MyClass myobject;
	// prefix operator
	++myobject;
	// the same as:
	myobject.operator++();
}