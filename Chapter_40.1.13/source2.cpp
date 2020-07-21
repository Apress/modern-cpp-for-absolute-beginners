#include <iostream>
#include <thread>
#include <string>

void function1(const std::string& param)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Executing function1, " << param << '\n';
	}
}

int main()
{
	std::thread t1{ function1, "Hello World from a thread." };
	t1.join(); 
}