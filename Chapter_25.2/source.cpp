#include <iostream>

class MyBaseClass
{
public:
	virtual void dowork()
	{
		std::cout << "Hello from a base class." << '\n';
	}
};

class MyDerivedClass : public MyBaseClass
{
public:
	void dowork()
	{
		std::cout << "Hello from a derived class." << '\n';
	}
};

int main()
{
	MyBaseClass* o = new MyDerivedClass;
	o->dowork();
	delete o;
}