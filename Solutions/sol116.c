#include <stdio.h>

#define LEFTCHILD(i)  ((i) * 2 + 1)
#define RIGHTCHILD(i) ((i) * 2 + 2)

void swap(int *a, int *b);

void arr_read(int *arr, int n);
void arr_print(int *arr, int n);

void heap_sort_max_heapify(int *arr, int n, int i, int heap_size);
void heap_sort_build_max(int *arr, int n, int heap_size);
void heap_sort(int *arr, int n);

int main(int argc, char **argv)
{
	int n;

	scanf("%d", &n);

	int arr[n];

	arr_read(arr, n);

	heap_sort(arr, n);

	arr_print(arr, n);

	return 0;
}

void heap_sort(int *arr, int n)
{
	int heap_size = n;

	heap_sort_build_max(arr, n, heap_size);

	for (int i = n - 1; i > 0; --i) {
		swap(&arr[0], &arr[i]);
		heap_size -= 1;
		heap_sort_max_heapify(arr, n, 0, heap_size);
	}
}

void heap_sort_max_heapify(int *arr, int n, int i, int heap_size)
{
	int lchild = LEFTCHILD(i);
	int rchild = RIGHTCHILD(i);
	int largest    = i; /* Let parent is largest of children */

	if (lchild < heap_size && arr[lchild] > arr[largest])
		largest = lchild;
	if (rchild < heap_size && arr[rchild] > arr[largest])
		largest = rchild;

	/* If largest is not the parent then swap otherwise leave it.
	 * Because parent already satisfy heap property */
	if (largest != i) {
		swap(&arr[largest], &arr[i]);
		heap_sort_max_heapify(arr, n, largest, heap_size);
	}
}

void heap_sort_build_max(int *arr, int n, int heap_size)
{
	/* nodes > n / 2 are all leaf */
	int m = n / 2;

	for (int i = m; i >= 0; --i)
		heap_sort_max_heapify(arr, n, i, heap_size);
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

