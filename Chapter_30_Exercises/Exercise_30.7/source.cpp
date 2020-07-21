#include <iostream>

enum class Colors
{
	Red,
	Green,
	Blue
};

int main()
{
	Colors mycolors = Colors::Green;
	switch (mycolors)
	{
	case Colors::Red:
		std::cout << "The color is Red." << '\n';
		break;
	case Colors::Green:
		std::cout << "The color is Green." << '\n';
		break;
	case Colors::Blue:
		std::cout << "The color is Blue." << '\n';
		break;
	default:
		break;
	}
}