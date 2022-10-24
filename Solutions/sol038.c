#include <stdio.h>

#define N 100

int main()
{
	int arr[N];
	int n, i, j, temp;

	printf("Enter n(1-%d): ", N);
	scanf("%d", &n);
	if (n < 1 || n > N) {
		printf("Invalid input. n must be between 1 and %d\n", N);
		return -1;
	}

	for (i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	/* Sort using bubble sort algo */
	for (i = 0; i < n - 1; ++i) {
		for (j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	/* Find duplicates */
	printf("\n\n");
	for (i = 0; i < n; ++i) {
		for (j = i; j < n - 1 && arr[i] == arr[j + 1]; ++j)
			; /* Empty body */
		if (i != j)
			printf("%d\n", arr[i]);
		i = j;
	}

	return 0;
}
