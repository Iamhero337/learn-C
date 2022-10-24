#include <stdio.h>

void array_reverse_print(int *arr, int size);

int main()
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	array_reverse_print(array, sizeof(array) / sizeof(array[0]));
	puts("");

	return 0;
}

void array_reverse_print(int *arr, int size)
{
	if (size == 0)
		return;

	printf("%d ", arr[size - 1]);
	array_reverse_print(arr, size - 1);
}


