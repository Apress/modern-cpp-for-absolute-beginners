#include <iostream>
#include <string>
#include <string_view>

int main()
{
	std::string s = "Hello World.";
	std::string_view sw(s.c_str() , 5);
	std::cout << sw;
}