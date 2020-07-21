#include <iostream>

class MyBaseClass {
public:
	virtual ~MyBaseClass() {}
};
class MyDerivedClass : public MyBaseClass {};

int main()
{
	MyBaseClass* base = new MyDerivedClass;
	MyDerivedClass* derived = new MyDerivedClass;

	// base to derived
	if (dynamic_cast<MyDerivedClass*>(base))
	{
		std::cout << "OK.\n";
	}
	else
	{
		std::cout << "Not convertible.\n";
	}
	// derived to base
	if (dynamic_cast<MyBaseClass*>(derived))
	{
		std::cout << "OK.\n";
	}
	else
	{
		std::cout << "Not convertible.\n";
	}
	
	delete base;
	delete derived;
}