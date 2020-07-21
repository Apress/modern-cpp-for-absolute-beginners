#include <iostream>
#include <concepts>

template <typename T>
concept MustBeIncrementable = requires (T x) { x++; };

template <typename T>
concept MustBeEvenOrOdd = requires (T x) { x % 2; };

template<typename T> requires MustBeIncrementable<T> && MustBeEvenOrOdd<T>
void myfunction(T x)
{
	std::cout << "The value conforms to both conditions: " << x << '\n';
}

int main()
{
	myfunction<char>(123); // OK
	myfunction<int>(124); // OK
	myfunction<double>(345); // Error, a floating point number is not even nor odd
}