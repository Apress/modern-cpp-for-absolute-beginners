#include <iostream>

class MyClass
{
public:
	void printmessage();
};

void MyClass::printmessage()
{
	std::cout << "Hello World.";
}

int main()
{
	MyClass o;
	o.printmessage();
}