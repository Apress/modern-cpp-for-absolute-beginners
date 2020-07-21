#include <iostream>

template <typename T>
class MyClass {
private:
	T x;
public:
	MyClass(T xx)
		:x{ xx }
	{
	}

	T getvalue()
	{
		return x;
	}
};

int main()
{
	MyClass<int> o{ 123 };
	std::cout << "The value of x is: " << o.getvalue() << '\n';

	MyClass<double> o2{ 456.789 };
	std::cout << "The value of x is: " << o2.getvalue() << '\n';
}