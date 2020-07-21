#include <iostream>
#include <string>

void custommessage(const std::string& message)
{
	std::cout << "The string argument you used is: " << message;
}

int main()
{
	std::string mymessage = "My Custom Message.";
	custommessage(mymessage);
}