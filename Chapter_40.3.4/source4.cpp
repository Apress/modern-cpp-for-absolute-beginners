#include <iostream>
#include <filesystem>

int main()
{
	auto myfolder = "MyFolder/";
	for (auto el : std::filesystem::directory_iterator(myfolder))
	{
		std::cout << el.path() << '\n';
	}
}