#include <iostream>
#include <memory>

class MyClass
{
private:
	int x;
	double d;
public:
	MyClass(int xx, double dd)
		: x{ xx }, d{ dd }	{}
	void printdata() { std::cout << "x: " << x << ", d: " << d; }
};

int main()
{
	auto p = std::make_unique<MyClass>(123, 456.789);
	p->printdata();
}