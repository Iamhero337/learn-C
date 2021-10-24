#include <stdio.h>

int main()
{
	int n, space;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		space = i;
		for (int j = 0; j < space; ++j)
			printf("  ");
		for (int j = 0; j < n - i; ++j)
			printf("* ");
		printf("\n");
	}

	return 0;
}
