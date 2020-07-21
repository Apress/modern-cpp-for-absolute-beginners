#include <iostream>
#include <thread>

void function1()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Executing function1." << '\n';
	}
}

void function2()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Executing function2." << '\n';
	}
}

int main()
{
	std::thread t1{ function1 };
	std::thread t2{ function2 };

	t1.join();
	t2.join();
}