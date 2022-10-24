#include <stdio.h>

int main()
{
	int n;
	float sum = 0;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
		sum += 1 / (i + 1.0);

	printf("%.2f\n", sum);

	return 0;
}
