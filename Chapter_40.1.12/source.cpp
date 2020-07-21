int main()
{
	constexpr int x = 123;
	static_assert(x == 456, "The constexpr value is not 456.");
}