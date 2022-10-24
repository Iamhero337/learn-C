#include <stdio.h>

#define N 100

int linear_search(int x, int arr[], int n);

int main()
{
	int arr[N];
	int n, x;

	printf("x: ");
	scanf("%d", &x);
	printf("n: ");
	scanf("%d", &n);
	if (n < 1 || n > N) {
		printf("n is invalid, must be between 1 and %d\n", N);
		return -1;
	}
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	printf("%d\n", linear_search(x, arr, n));

	return 0;
}

int linear_search(int x, int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		if (arr[i] == x)
			return i;

	return -1;
}
