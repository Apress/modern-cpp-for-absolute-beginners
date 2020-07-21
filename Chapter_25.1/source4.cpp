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

class MySecondDerivedClass : public MyDerivedClass
{
public:
	bool b;
};

int main()
{
	MySecondDerivedClass o;
	o.c = 'a';
	o.x = 123;
	o.d = 456.789;
	o.b = true;
}