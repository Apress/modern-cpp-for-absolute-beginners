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

};

int main()
{
	MyBaseClass* o = new MyDerivedClass;
	o->dowork();
	delete o;
}