#include <iostream>
#include <vector>
#include <typeinfo>

int main()
{
	auto mylambda = []<typename T>(T param)
	{
		std::cout << typeid(T).name() << '\n';
	};
	
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	mylambda(v); // integer
	
	std::vector<double> v2 = { 3.14, 123.456, 7.13 };
	mylambda(v2); // double
}