class MyBaseClass
{
public:
	char c;
	int x;
};

class MyDerivedClass : public MyBaseClass
{
public:
	double d;
};

int main()
{
	MyDerivedClass o;
	o.c = 'a';
	o.x = 123;
	o.d = 456.789;
}