#include <iostream>

namespace A
{
	namespace B
	{
		void myfunction();
	}
}

void A::B::myfunction()
{
	std::cout << "Hello World from a function inside a nested namespace." << '\n';
}

int main()
{
	A::B::myfunction();
	using namespace A::B;
	myfunction();
}