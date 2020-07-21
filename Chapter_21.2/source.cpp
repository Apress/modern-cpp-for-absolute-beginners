int main()
{
	int x = 123; // first x' scope begins here
	{
		int x = 456; // redefinition of x, second x' scope begins here
	} // block ends, second x' scope ends here
	  // the first x resumes here
} // block ends, scope of first x's ends here