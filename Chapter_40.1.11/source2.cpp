#include <iostream>
#include <tuple>
#include <string>

int main()
{
	auto mytuple = std::make_tuple<int, double, std::string>(123, 3.14, "Hello World.");
	std::cout << "The first tuple element is: " << std::get<0>(mytuple) << '\n';
	std::cout << "The second tuple element is: " << std::get<1>(mytuple) << '\n';
	std::cout << "The third tuple element is: " << std::get<2>(mytuple) << '\n';
}