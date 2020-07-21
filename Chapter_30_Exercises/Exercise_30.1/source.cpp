#include <iostream>

void myfunction()
{
	static int counter = 0;
	counter++;
	std::cout << "The function is called " << counter << " time(s)." << '\n';
}

int main()
{
	myfunction();
	myfunction();
	for (int i = 0; i < 5; i++)
	{
		myfunction();
	}
}