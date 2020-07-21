#include <iostream>

class MyClass
{
public:
	void printmessage()
	{
		std::cout << "Hello World.";
	}
};

int main()
{
	MyClass o;
	o.printmessage();
}