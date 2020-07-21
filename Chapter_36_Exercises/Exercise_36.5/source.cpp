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

int main()
{
	std::unique_ptr<BaseClass> p = std::make_unique<DerivedClass>();
	p->dowork();
} // p1 goes out of scope here