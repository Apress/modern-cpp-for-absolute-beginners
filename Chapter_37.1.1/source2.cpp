#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::fstream fs{ "myfile.txt" };
	std::string s;
	while (fs)
	{
		std::getline(fs, s); // read each line into a string
		std::cout << s << '\n';
	}
}