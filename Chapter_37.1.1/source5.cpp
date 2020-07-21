#include <fstream>

int main()
{
	std::fstream fs{ "myoutputfile.txt", std::ios::out };
	fs << "First line of text." << '\n';
	fs << "Second line of text" << '\n';
	fs << "Third line of text" << '\n';
}