#include <iostream>
#include <utility>

int main()
{
	std::pair<int, double> mypair = { 123, 3.14 };
	std::cout << "The first element is: " << mypair.first << '\n';
	std::cout << "The second element is: " << mypair.second << '\n';
}