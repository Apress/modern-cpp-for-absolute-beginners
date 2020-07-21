#include <iostream>
#include <thread>
#include <string>
#include <mutex>

std::mutex m; // will guard std::cout

void myfunction(const std::string& param)
{
	for (int i = 0; i < 10; i++)
	{
		std::lock_guard<std::mutex> lg(m);
		std::cout << "Executing function from a " << param << '\n';
	} // lock_guard goes out of scope here and unlocks the mutex
}

int main()
{
	std::thread t1{ myfunction, "Thread 1" };
	std::thread t2{ myfunction, "Thread 2" };

	t1.join();
	t2.join();
}