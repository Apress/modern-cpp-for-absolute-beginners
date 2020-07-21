#include <iostream>

class MyClass
{
private:
	int x;
	double d;
public:
	MyClass(int xx, double dd);
	void printdata();
};

MyClass::MyClass(int xx, double dd)
	: x{ xx }, d{ dd }
{

}

void MyClass::printdata()
{
	std::cout << " The value of x: " << x << ", the value of d: " << d << '\n';
}

int main()
{
	MyClass o{ 123, 456.789 };
	o.printdata();
}