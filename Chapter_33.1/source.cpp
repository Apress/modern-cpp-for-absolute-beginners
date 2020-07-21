int main()
{
	char mychar = 64;
	int myint = 123;
	double mydouble = 456.789;
	bool myboolean = true;

	myint = mychar;
	mydouble = myint;
	mychar = myboolean;
}