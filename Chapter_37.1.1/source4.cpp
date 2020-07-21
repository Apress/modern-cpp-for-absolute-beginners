#include <iostream>
#include <fstream>

int main()
{
	std::fstream fs{ "myfile.txt" };
	char c;
	while (fs >> std::noskipws >> c)
	{
		std::cout << c;
	}
}