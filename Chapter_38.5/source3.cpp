#include <iostream>

class MyClass
{
public:
	bool operator()(int x)
	{
		if (x % 2 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	MyClass myobject;
	bool isEven = myobject(123);
	if (isEven)
	{
		std::cout << "The number is even." << '\n';
	}
	else
	{
		std::cout << "The number is odd." << '\n';
	}
}