#include <iostream>
#include <filesystem>

int main()
{
	std::filesystem::path folderpath = "C:\\MyFolder\\";
	if (std::filesystem::exists(folderpath))
	{
		std::cout << "The path: " << folderpath << " exists.";
	}
	else
	{
		std::cout << "The path: " << folderpath << " does not exist.";
	}
}