#include <iostream>

class MyAbstractClass
{
public:
	virtual void dowork() = 0;
};

class MyDerivedClass : public MyAbstractClass
{
public:
	void dowork()
	{
		std::cout << "Hello from a derived class." << '\n';
	}
};

int main()
{
	MyAbstractClass* o = new MyDerivedClass;
	o->dowork();
	delete o;
}