#include <iostream>
#include <utility>
#include <tuple>

int main()
{
	std::tuple<char, int, double> mytuple = { 'a', 123, 3.14 };
	std::cout << "The first element is: " << std::get<0>(mytuple) << '\n';
	std::cout << "The second element is: " << std::get<1>(mytuple) << '\n';
	std::cout << "The third element is: " << std::get<2>(mytuple) << '\n';
}