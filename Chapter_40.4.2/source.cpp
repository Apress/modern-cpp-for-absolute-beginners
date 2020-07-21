#include <iostream>
#include <concepts>

template <typename T>
concept MustBeIncrementable = requires (T x) { x++; };

template<MustBeIncrementable T>
void myfunction(T x)
{
	x++;
	std::cout << x << '\n';
}

int main()
{
	myfunction<char>(42); // OK
	myfunction<int>(123); // OK
	myfunction<double>(345.678); // OK
}