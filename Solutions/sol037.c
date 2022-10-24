#include <stdio.h>

#define N 100

int main()
{
	int arr[N];
	int n, temp;

	printf("Enter n(1-%d): ", N);
	scanf("%d", &n);
	if (n < 1 || n > N) {
		printf("Invalid n, must be between 1 and %d\n", N);
		return -1;
	}

	/* Input in array */
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	/* Sorting using Bubble Sort algorithm */
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	/* Print sorted array */
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	puts("");

	return 0;
}
