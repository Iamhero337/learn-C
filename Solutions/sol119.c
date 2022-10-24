#include <stdio.h>
#include <assert.h>

#define PARENT(i) 	  ((i) / 2 - 1)
#define LEFTCHILD(i)  ((i) * 2 + 1)
#define RIGHTCHILD(i) ((i) * 2 + 2)

void swap(int *a, int *b);

void heap_insert(int *arr, int n, int *heap_size, int key);
void heap_increase(int *arr, int n, int *heap_size, int i, int key);
int heap_extract_max(int *arr, int n, int *heap_size);
void heap_max_heapify(int *arr, int n, int i, int heap_size);

int main(int argc, char **argv)
{
	int x, n, a;
	int heap_size;
	int ans, current_max;

	scanf("%d", &x);
	scanf("%d", &n);

	int arr[n];
	heap_size = 0;

	for (int i = 0; i < n; ++i) {
		scanf("%d", &a);
		heap_insert(arr, n, &heap_size, a);
	}

	ans = 0;
	while (x > 0) {
		current_max = heap_extract_max(arr, n, &heap_size);
		if (current_max <= 0) {
			ans = -1;
			break;
		}
		x -= current_max;
		current_max /= 2;
		heap_insert(arr, n, &heap_size, current_max);
		ans += 1;
	}

	printf("%d\n", ans);

	return 0;
}

void heap_insert(int *arr, int n, int *heap_size, int key)
{
	/* No space left */
	assert(n != *heap_size);

	*heap_size = *heap_size + 1;
	arr[*heap_size - 1] = -1e9;

	heap_increase(arr, n, heap_size, *heap_size - 1, key);
}

void heap_increase(int *arr, int n, int *heap_size, int i, int key)
{
	if (key < arr[i]) return;

	arr[i] = key;

	while (i > 0 && PARENT(i) >= 0 && arr[PARENT(i)] < arr[i]) {
		swap(&arr[i], &arr[PARENT(i)]);
		i = PARENT(i);
	}

}

int heap_extract_max(int *arr, int n, int *heap_size)
{
	int max;

	assert(*heap_size > 0);

	max = arr[0];
	arr[0] = arr[*heap_size - 1];
	*heap_size = *heap_size - 1;
	heap_max_heapify(arr, n, 0, *heap_size);

	return max;
}


void heap_max_heapify(int *arr, int n, int i, int heap_size)
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
		heap_max_heapify(arr, n, largest, heap_size);
	}
}

void swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

