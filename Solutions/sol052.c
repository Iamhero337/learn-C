#include <stdio.h>

void print_address(double *arr, int size);

int main(void)
{
	double d[] = {1.0, 1.1, 2.0, 2.1, 3.2, 4.5, 11.34, 33.44};

	print_address(d, 8);

	return 0;
}

void print_address(double *arr, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%p\n", (arr + i));
}
