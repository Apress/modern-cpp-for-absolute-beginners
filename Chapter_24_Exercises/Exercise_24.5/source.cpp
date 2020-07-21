#include <iostream>

class MyClass
{
private:
	int x;
public:
	void setx(int myvalue)
	{
		x = myvalue;
	}

	int getx()
	{
		return x;
	}
};

int main()
{
	MyClass o;
	o.setx(123);
	std::cout << "The value of x is: " << o.getx();
}