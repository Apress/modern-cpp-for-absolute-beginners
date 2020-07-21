#include <iostream>

namespace MyNameSpace
{
	void myfunction();
}

void MyNameSpace::myfunction()
{
	std::cout << "Hello World from a function inside a namespace.";
}

int main()
{
	MyNameSpace::myfunction();
}