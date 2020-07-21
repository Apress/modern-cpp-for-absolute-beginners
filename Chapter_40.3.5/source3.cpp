#include <iostream>
#include <string>
#include <string_view>

int main()
{
	std::string s = "Hello World";
	std::string_view sw(s);
	std::cout << sw.substr(0, 5);
}