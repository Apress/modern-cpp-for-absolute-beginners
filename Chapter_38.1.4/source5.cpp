#include <iostream>
#include <map>

int main()
{
	std::map<int, char> mymap = { {1, 'a'}, {2, 'b'}, {3,'z'} };
    auto it = mymap.find(2);
    if (it != mymap.end())
    {
        std::cout << "Found: " << it->first << " " << it->second << '\n';
    }
    else
    {
        std::cout << "Not found.";
    }
}