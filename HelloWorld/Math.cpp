int multiplay(int a, int b)
{
	return a * b;
}

int power(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a;
	}
	return result;
}