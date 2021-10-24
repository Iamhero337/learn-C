#include <stdio.h>

int main()
{
	int n, o, sum;

	sum = 0;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i) {
		o = (i % 2 == 0) ? i - 1 : i + 1;
		sum += o;
	}

	printf("%d\n", sum);

	return 0;
}
