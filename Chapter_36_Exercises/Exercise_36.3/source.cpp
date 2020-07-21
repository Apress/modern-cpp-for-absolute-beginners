#include <iostream>
#include <memory>

class MyClass
{
private:
	int x;
	double d;
public:
	MyClass(int xx, double dd)
		: x{ xx }, d{ dd }
	{}
	void printdata()
	{
		std::cout << "Data members values are: " << x << " and: " << d;
	}
};

int main()
{
	std::unique_ptr<MyClass> p = std::make_unique<MyClass>(123, 456.789);
	p->printdata();
}