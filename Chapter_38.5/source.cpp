#include <iostream>

class MyClass
{
public:
	void operator()()
	{
		std::cout << "Function object called." << '\n';
	}
};

int main()
{
	MyClass myobject;
	myobject(); // invoke the function object
}