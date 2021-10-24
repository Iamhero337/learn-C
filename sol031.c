#include <stdio.h>

int main()
{
	int n;
	int a = 0, b = 1;

	printf("Enter n: ");
	scanf("%d", &n);

	printf("0 1 ");
	for (int i = 2; i < n; ++i) {
		/* @NOTE Advancing a and b without extra variable */
		b = a + b;
		a = b - a;

		printf("%d ", b);
	}
	puts("");

	return 0;
}
