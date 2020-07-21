class MyBaseClass
{
public:
	char c;
	int x;
};

class MyDerivedClass : public MyBaseClass
{
	// c and x also accessible here
};

int main()
{
	MyDerivedClass o;
	o.c = 'a';
	o.x = 123;
}