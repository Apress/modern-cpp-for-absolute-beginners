#include <iostream>

class MyClass
{
public:
	void operator()(int x)
	{
		std::cout << "Function object with a parameter " << x << " called.";
	}
};

int main()
{
	MyClass myobject;
	myobject(123); // invoke the function object
}