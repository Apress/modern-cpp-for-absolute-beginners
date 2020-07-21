#include <iostream>

template <typename T>
class MyClass
{
private:
	T x;
public:
	MyClass(T xx)
		: x{ xx }
	{}
	
	T getx() const
	{
		return x;
	}

	void setx(T ax)
	{
		x = ax;
	}

};

int main()
{
	MyClass<int> o{123};
	std::cout << "The value of the data member is: " << o.getx() << '\n';
	o.setx(456);
	std::cout << "The value of the data member is: " << o.getx() << '\n';

	MyClass<double> o2{ 4.25 };
	std::cout << "The value of the data member is: " << o2.getx() << '\n';
	o2.setx(6.28);
	std::cout << "The value of the data member is: " << o2.getx() << '\n';
}