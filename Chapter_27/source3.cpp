#include <iostream>

class MyClass
{
public:
	static void myfunction(); // declare a static member function
};

// define a static member function
void MyClass::myfunction()
{
	std::cout << "Hello World from a static member function.";
}

int main()
{
	MyClass::myfunction(); // call a static member function
}