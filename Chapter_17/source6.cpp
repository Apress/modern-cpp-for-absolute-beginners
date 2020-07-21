int main()
{
	constexpr int n = 123;			//OK, 123 is a compile-time constant expression
	constexpr double d = 456.78;	//OK, 456.78 is a compile-time constant expression
	constexpr double d2 = d;		//OK, d is a constant expression
	int x = 123;
	constexpr int n2 = x;			//compile-time error
									// the value of x is not known during compile-time
}