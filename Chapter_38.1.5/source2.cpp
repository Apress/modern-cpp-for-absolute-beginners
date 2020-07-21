#include <iostream>
#include <utility>

int main()
{
	int x = 123;
	double d = 3.14;

	std::pair<int, double> mypair = std::make_pair(x, d);
	std::cout << "The first element is: " << mypair.first << '\n';
	std::cout << "The second element is: " << mypair.second << '\n';
}