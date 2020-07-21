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

	void printvalues()
	{
		std::cout << "The values of x is: " << x << ", the value of d is: " << d;
	}

	MyClass& operator-=(const MyClass& rhs)
	{
		this->x -= rhs.x;
		this->d -= rhs.d;
		return *this;
	}

	friend MyClass operator-(MyClass lhs, const MyClass& rhs)
	{
		lhs -= rhs;
		return lhs;
	}
};

int main()
{
	MyClass myobject{ 3, 3.0 };
	MyClass mysecondobject{ 1, 1.0 };
	MyClass myresult = myobject - mysecondobject;
	myresult.printvalues();
}