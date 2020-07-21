#include <iostream>

class MyBaseClass {
public:
	virtual ~MyBaseClass() {}
};
class MyDerivedClass : public MyBaseClass {};
class MyUnrelatedClass {};

int main()
{
	MyBaseClass* base = new MyDerivedClass;
	MyDerivedClass* derived = new MyDerivedClass;
	MyUnrelatedClass* unrelated = new MyUnrelatedClass;

	// base to derived
	if (dynamic_cast<MyUnrelatedClass*>(base))
	{
		std::cout << "OK.\n";
	}
	else
	{
		std::cout << "Not convertible.\n";
	}
	// derived to base
	if (dynamic_cast<MyUnrelatedClass*>(derived))
	{
		std::cout << "OK.\n";
	}
	else
	{
		std::cout << "Not convertible.\n";
	}
	
	delete base;
	delete derived;
	delete unrelated;
}