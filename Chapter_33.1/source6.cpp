#include <iostream>

int main()
{
	int x = 123;
	int* pint = &x;
	void* pvoid = pint; // convert from int pointer
	int* pint2 = static_cast<int*>(pvoid); // cast a void pointer to int pointer
	std::cout << *pint2; // dereference a pointer
}