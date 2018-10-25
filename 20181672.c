#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

long rfibo(int n);
long sfibo(int n);

int main()
{
	int iterator;
	for (iterator = 3; iterator <= 45; iterator += 2)
	{
		printf("rfibo(%d) = %ld\n", iterator, rfibo(iterator));
		printf("sfibo(%d) = %ld\n", iterator, sfibo(iterator));

	}

	return 0;
}

long rfibo(int n)
{
	if (n == 0 || n == 1) return n;
	return rfibo(n - 1) + rfibo(n - 2);
}

long sfibo(int n)
{
	static int prev_fibo = 0;
	static int fibo = 1;
	int buffer;
	buffer = fibo;
	fibo = fibo + prev_fibo;
	prev_fibo = buffer;
	buffer = fibo;
	fibo = fibo + prev_fibo;
	prev_fibo = buffer;
	return fibo;
}
