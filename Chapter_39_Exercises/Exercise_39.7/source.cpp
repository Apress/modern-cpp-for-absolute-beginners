#include <iostream>
#include <set>

int main()
{
	std::set<int> myset = { -10, 1, 3, 5, 6, 9, 15 };
	std::cout << "The set's size is: " << myset.size() << '\n';
	std::cout << "Clearing the set..." << '\n';
	myset.clear(); // clear the set's content
	if (myset.empty())
	{
		std::cout << "The set is empty." << '\n';
	}
	else
	{
		std::cout << "The set is not empty." << '\n';
	}
}