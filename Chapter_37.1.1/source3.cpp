#include <iostream>
#include <fstream>

int main()
{
	std::fstream fs{ "myfile.txt" };
	char c;
	while (fs >> c)
	{
		std::cout << c;
	}
}