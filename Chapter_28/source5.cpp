#include <iostream>

template <typename T>
class MyClass {
private:
	T x;
public:
	MyClass(T xx);
};

template <typename T>
MyClass<T>::MyClass(T xx)
	: x{xx}
{
	std::cout << "Constructor invoked. The value of x is: " << x << '\n';
}

int main()
{
	MyClass<int> o{ 123 };
	MyClass<double> o2{ 456.789 };
}