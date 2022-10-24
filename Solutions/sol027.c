#include <stdio.h>

int main()
{
	int n;
	int space;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		space = n - i - 1;
		for (int j = 0; j < space; ++j)
			printf(" ");
		for (int j = 0; j < i + 1; ++j) {
			printf(" *");
		}
		printf("\n");
	}

	return 0;
}
