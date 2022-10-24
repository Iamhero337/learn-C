#include <stdio.h>

int power(int b, int p);

int main()
{
	int b = 100;
	int p = 10;

	printf("%d\n", power(b, p));

	return 0;
}

int power(int b, int p)
{
	if (p == 0)
		return 1;
	if (p == 1)
		return b;

	return b * power(b, p - 1);
}
