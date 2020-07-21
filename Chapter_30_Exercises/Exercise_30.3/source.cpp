#include <iostream>
#include <string>

class MyClass
{
public:
	static void mystaticfunction();
	void myfunction();

};

void MyClass::mystaticfunction()
{
	std::cout << "Hello World from a static member function." << '\n';
}

void MyClass::myfunction()
{
	std::cout << "Hello World from a regular member function." << '\n';
}

int main()
{
	MyClass::mystaticfunction();
	MyClass myobject;
	myobject.myfunction();
}