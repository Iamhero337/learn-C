#include <stdio.h>

int main()
{
	int n;
	float sum = 0;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; ++i)
		sum += 1.0 / (i * i);

	printf("%.2f\n", sum);

	return 0;
}

