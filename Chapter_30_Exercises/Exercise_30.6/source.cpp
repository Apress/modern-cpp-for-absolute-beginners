#include <iostream>

enum class Days
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

int main()
{
	Days myday = Days::Monday;
	std::cout << "The enum value is now Monday." << '\n';
	
	if (myday == Days::Monday)
	{
		myday = Days::Friday;
	}
	std::cout << "Nobody likes Mondays. The value is now Friday.";
}