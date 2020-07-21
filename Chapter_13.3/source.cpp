#include <iostream>
#include <string>

int main()
{
	std::string s = "Hello World.";
	char c1 = s[0];		// 'H'
	char c2 = s.at(0);	// 'H';

	char c3 = s[6];		// 'W'
	char c4 = s.at(6);	// 'W';

	std::cout << "First character: " << c1 << ", sixth character: " << c3;
}