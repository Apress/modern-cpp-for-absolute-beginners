#include <iostream>
#include <memory>

class MyBaseClass
{
public:
	virtual void printmessage()
	{
		std::cout << "Hello from a base class.";
	}
};

class MyderivedClass: public MyBaseClass
{
public:
	void printmessage()
	{
		std::cout << "Hello from a derived class.";
	}
};

int main()
{
	std::unique_ptr<MyBaseClass> p = std::make_unique<MyderivedClass>();
	p->printmessage();
}