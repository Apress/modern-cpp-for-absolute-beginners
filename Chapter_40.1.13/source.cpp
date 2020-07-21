#include <iostream>
#include <thread>

void function1()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Executing function1." << '\n';
	}
}

int main()
{
	std::thread t1{ function1 }; // create and start a thread
	t1.join(); // wait for the t1 thread to finish
}