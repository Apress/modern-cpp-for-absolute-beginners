#include <iostream>
#include <string>

class MyClass
{
public:
	static std::string name;
};

std::string MyClass::name = "John Doe";

int main()
{
	std::cout << "Static data member value: " << MyClass::name << '\n';
	MyClass::name = "Jane Doe";
	std::cout << "Static data member value: " << MyClass::name << '\n';
}