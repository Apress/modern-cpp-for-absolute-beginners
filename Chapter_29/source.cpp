enum MyEnum
{
	myfirstvalue,
	mysecondvalue,
	mythirdvalue
};

int main()
{
	MyEnum myenum = myfirstvalue;
	myenum = mysecondvalue; // we can change the value of our enum object
}