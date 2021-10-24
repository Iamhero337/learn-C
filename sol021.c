#include <stdio.h>

int main()
{
	int n, counter;

	printf("Enter n: ");
	scanf("%d", &n);

	counter = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j <= i; ++j) {
			++counter;
			printf("%3d", counter);
		}
		printf("\n");
	}

	return 0;
}
