#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
public:
	explicit Person(const std::string& aname)
		: name{ aname }
	{}

	std::string getname() const { return name; }
};

class Student : public Person
{
private:
	int semester;
public:
	Student(const std::string& aname, int asemester)
		: Person::Person{ aname }, semester{ asemester }
	{}

	int getsemester() const { return semester; }

};

int main()
{
	Person person{ "John Doe." };
	std::cout << person.getname() << '\n';

	Student student{ "Jane Doe", 2 };
	std::cout << student.getname() << '\n';
	std::cout << "Semester is: " << student.getsemester() << '\n';
}