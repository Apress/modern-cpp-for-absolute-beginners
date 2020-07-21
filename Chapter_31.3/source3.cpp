namespace MyNameSpace
{
	int x;
	double d;
}

namespace MyNameSpace
{
	char c;
	bool b;
}


int main()
{
	MyNameSpace::x = 123;
	MyNameSpace::d = 456.789;
	MyNameSpace::c = 'a';
	MyNameSpace::b = true;
}