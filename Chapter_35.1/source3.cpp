#include <iostream>
#include <memory>

class MyClass
{
public:
	void printmessage()
	{
		std::cout << "Hello from a class.";
	}
};

int main()
{
	std::unique_ptr<MyClass> p = std::make_unique<MyClass>();
	p->printmessage();
}