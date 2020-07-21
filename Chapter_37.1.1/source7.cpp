#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::fstream fs{ "myoutputfile.txt", std::ios::out };
	std::string s1 = "The first string.\n";
	std::string s2 = "The second string.\n";
	fs << s1 << s2;
}