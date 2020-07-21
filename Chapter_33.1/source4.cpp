int main()
{
	char mychar = 64;
	int myint = 0;
	double mydouble = 3.14;
	bool myboolean = true;

	myboolean = mychar;	// true
	myboolean = myint;		// false
	myboolean = mydouble;	// true
}