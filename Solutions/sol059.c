#include <stdio.h>

void sum_by_reference(int *a, int *b, int *sum);

int main()
{
	int x, y, result;
	
	x = 10;
	y = 20;
	sum_by_reference(&x, &y, &result);
	printf("SUM = %d\n", result);

	return 0;
}

void sum_by_reference(int *a, int *b, int *sum)
{
	*sum = *a + *b;
}


