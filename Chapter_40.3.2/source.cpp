int main()
{
	constexpr auto mylambda = [](int x, int y) { return x + y; };
	static_assert(mylambda(10, 20) == 30, "The lambda condition is not true.");
}