#include <stdio.h>

void swap(int *a, int *b);

void arr_read(int *arr, int n);
void arr_print(int *arr, int n);

void arr_sort_insertion(int *arr, int n);

int main(int argc, char **argv)
{
	int n;

	scanf("%d", &n);

	int arr[n];

	arr_read(arr, n);

	/* Selection sort */
	arr_sort_insertion(arr, n);

	arr_print(arr, n);

	return 0;
}

void arr_sort_insertion(int *arr, int n)
{
	for (int i = 1; i < n; ++i) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && key < arr[j]) {
			arr[j + 1] = arr[j];
		   	--j;
		}
		arr[j + 1] = key;
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


