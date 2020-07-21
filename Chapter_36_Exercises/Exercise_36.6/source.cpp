#include <iostream>
#include <memory>

class BaseClass
{
public:
	virtual void dowork() = 0;
	virtual ~BaseClass() {}
};

class DerivedClass : public BaseClass
{
public:
	void dowork() override
	{
		std::cout << "Do work from a DerivedClass." << '\n';
	}
};

class SecondDerivedClass : public BaseClass
{
public:
	void dowork() override
	{
		std::cout << "Do work from a SecondDerivedClass." << '\n';
	}
};

int main()
{
	std::unique_ptr<BaseClass> p = std::make_unique<DerivedClass>();
	p->dowork();

	std::unique_ptr<BaseClass> p2 = std::make_unique<SecondDerivedClass>();
	p2->dowork();
} // p1 and p2 go out of scope here