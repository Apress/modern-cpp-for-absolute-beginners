#include <fstream>

int main()
{
	std::fstream fs{ "myoutputfile.txt", std::ios::app };
	fs << "This is appended text" << '\n';
	fs << "This is also an appended text." << '\n';
}