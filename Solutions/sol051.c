#include <stdio.h>

int main(void)
{
	double d[] = {1.0, 1.1, 2.0, 2.1, 3.2, 4.5, 11.34, 33.44};

	/* @NOTE Please fill out the code below to print the address of
	 * every element of array d */
	for (int i = 0; i < sizeof(d) / sizeof(d[0]); ++i)
		printf("%p\n", &d[i]);

	return 0;
}

