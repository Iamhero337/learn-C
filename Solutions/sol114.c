#include <stdio.h>

void swap(int *a, int *b);

void arr_read(int *arr, int n);
void arr_print(int *arr, int n);

void merge_sort(int *arr, int n);
void merge_sortr(int *arr, int l, int h);
void merge_sort_merge(int *arr, int l, int m, int h);

int main(int argc, char **argv)
{
	int n;

	scanf("%d", &n);

	int arr[n];

	arr_read(arr, n);

	/* Selection sort */
	merge_sort(arr, n);

	arr_print(arr, n);

	return 0;
}

void merge_sort(int *arr, int n)
{
	merge_sortr(arr, 0, n - 1);
}

void merge_sortr(int *arr, int l, int h)
{
	int m;

	m = l + (h - l) / 2;
	if (l != h) {
		merge_sortr(arr, l, m);
		merge_sortr(arr, m + 1, h);
	}

	merge_sort_merge(arr, l, m, h);
}

void merge_sort_merge(int *arr, int l, int m, int h)
{
	int scratch[l + h];
	int i = l;
	int j = m + 1;

	while (i <= m && j <= h) {
		if (arr[i] <= arr[j])
			scratch[k++] = arr[i++];
		else
			scratch[k++] = arr[j++];
	}

	while (i <= m) arr[k++] = arr[i++];
	while (j <= h) arr[k++] = arr[j++];

	for (i = l, k = 0; i <= h; ++i, ++k)
		arr[i] = scratch[k];
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



