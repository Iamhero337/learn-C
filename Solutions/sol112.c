#include <stdio.h>

void swap(int *a, int *b);

void arr_read(int *arr, int n);
void arr_print(int *arr, int n);

void arr_sort_selection(int *arr, int n);

int main(int argc, char **argv)
{
	int n;

	scanf("%d", &n);

	int arr[n];

	arr_read(arr, n);

	/* Selection sort */
	arr_sort_selection(arr, n);

	arr_print(arr, n);

	return 0;
}

void arr_sort_selection(int *arr, int n)
{
	for (int i = 0; i < n - 1; ++i) {
		int maxpos = 0;
		for (int j = 1; j <= n - i - 1; ++j)
			if (arr[j] > arr[maxpos])
				maxpos = j;
		swap(&arr[maxpos], &arr[n - i - 1]);
	}

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

