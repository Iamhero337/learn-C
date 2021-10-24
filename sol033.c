#include <stdio.h>

int main()
{
	int n;
	int space;

	printf("Enter n: ");
	scanf("%d", &n);

	/* Upper half */
	for (int i = 0; i < n; ++i) {
		space = n - i - 1;
		for (int j = 0; j < space; ++j)
			printf(" ");
		for (int j  = 0; j < i * 2 + 1; ++j)
			printf("*");
		puts("");
	}

	/* Lower half */
	/* @NOTE Iterating on i in reverse order, that's why initial
	   value of i is n - 1 */
	for (int i = n - 1; i > 0; --i) {
		space = n - i;
		for (int j = 0; j < space; ++j)
			printf(" ");
		for (int j = 0; j < i * 2 - 1; ++j)
			printf("*");
		printf("\n");
	}

	return 0;
}

