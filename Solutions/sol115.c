#include <stdio.h>

void swap(int *a, int *b);

void arr_read(int *arr, int n);
void arr_print(int *arr, int n);

void quick_sort(int *arr, int n);
void quick_sortr(int *arr, int l, int h);
int quick_sort_partition(int *arr, int l, int h);

int main(int argc, char **argv)
{
	int n;

	scanf("%d", &n);

	int arr[n];

	arr_read(arr, n);

	quick_sort(arr, n);

	arr_print(arr, n);

	return 0;
}

void quick_sort(int *arr, int n)
{
	quick_sortr(arr, 0, n - 1);
}

void quick_sortr(int *arr, int l, int h)
{
	int p;

	if (l < h) {
		p = quick_sort_partition(arr, l, h);
		quick_sortr(arr, l, p - 1);
		quick_sortr(arr, p + 1, h);
	}
}

int quick_sort_partition(int *arr, int l, int h)
{
	int p, pivot, i;

	i = l;
	p = l;
	pivot = arr[h];

	while (i <= h - 1) {
		if (arr[i] <= pivot) {
			swap(&arr[i], &arr[p]);
			++p;
		}
		++i;
	}

	swap(&arr[p], &arr[h]);

	return p;
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




