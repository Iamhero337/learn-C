#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define max(a, b) ((a) > (b)) ? (a) : (b)

void swap(int *a, int *b);

void arr_read(int *arr, int n);
void arr_print(int *arr, int n);

void counting_sort(int *arr, int n);

int main(int argc, char **argv)
{
	int n;

	scanf("%d", &n);

	int arr[n];

	arr_read(arr, n);

	counting_sort(arr, n);

	arr_print(arr, n);

	return 0;
}

void counting_sort(int *arr, int n)
{
	int k = -1e9;
	int *counts;
	int *brr;

	/* Find max in arr */
	for (int i = 0; i < n; ++i)
		k = max(k, arr[i]);

	counts = calloc(k + 1, sizeof(int));
	brr    = calloc(n, sizeof(int));

	assert(counts != NULL);
	assert(brr != NULL);

	for (int i = 0; i < n; ++i)
		counts[arr[i]] += 1;

	for (int i = 1; i <= k; ++i)
		counts[i] = counts[i] + counts[i - 1];

	for (int i = n - 1; i >= 0; --i) {
		brr[counts[arr[i]] - 1] = arr[i];
		counts[arr[i]] = counts[arr[i]] - 1;
	}

	for (int i = 0; i < n; ++i)
		arr[i] = brr[i];
}


void swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

void arr_read(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
}

void arr_print(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	puts("");
}


