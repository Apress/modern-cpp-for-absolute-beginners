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

	// postfix operator ++
	MyClass operator++(int)
	{
		MyClass tmp(*this); // create a copy
		operator++();		// invoke the prefix operator overload
		std::cout << "Postfix operator ++ invoked." << '\n';
		return tmp;			// return old value
	}
};

int main()
{
	MyClass myobject;

	// postfix operator
	myobject++;
	// is the same as if we had:
	myobject.operator++(0);
}