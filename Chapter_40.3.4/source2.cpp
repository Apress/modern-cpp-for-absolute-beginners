#include <iostream>
#include <filesystem>

int main()
{
	std::filesystem::path folderpath = "C:\\MyFolder\\myfile.txt";
	if (std::filesystem::exists(folderpath))
	{
		std::cout << "The file: " << folderpath << " exists.";
	}
	else
	{
		std::cout << "The file: " << folderpath << " does not exist.";
	}
}