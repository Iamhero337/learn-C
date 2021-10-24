#include <stdio.h>

#define N 100

int main()
{
	int arr[N];
	int n, tmp;

	printf("n: ");
	scanf("%d", &n);
	if (n < 1 || n > N) {
		printf("Invalid n, must be between 1 and %d\n", N);
		return 1;
	}

	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	/* Sort */
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	printf("min: %d    max: %d\n", arr[0], arr[n - 1]);

	return 0;
}
