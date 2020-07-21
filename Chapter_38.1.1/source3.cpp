#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::cout << "The third element is:" << v[2] << '\n';
	std::cout << "The fourth element is:" << v.at(3) << '\n';
}