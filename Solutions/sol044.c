#include <stdio.h>

#define ARRSIZE 10

void input_array(int arr[], int size);
void print_array(int arr[], int size);
void merge_array(int dest[], int src1[], int src2[], int size1, int size2);

int main()
{
	int arr_a[ARRSIZE], arr_b[ARRSIZE], arr_c[ARRSIZE * 2];

	printf("Enter elements of array A -->\n");
	input_array(arr_a, ARRSIZE);
	printf("Enter elements of array B -->\n");
	input_array(arr_b, ARRSIZE);

	merge_array(arr_c, arr_a, arr_b, ARRSIZE, ARRSIZE);
	printf("Merged array C -->\n");
	print_array(arr_c, ARRSIZE * 2);
	puts("");

	return 0;
}

void input_array(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		scanf("%d", &arr[i]);
}

void print_array(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
}

void merge_array(int dest[], int src1[], int src2[], int size1, int size2)
{
	for (int i = 0; i < size1; ++i)
		dest[i] = src1[i];
	for (int i = size1; i < size1 + size2; ++i)
		dest[i] = src2[i - size1];
}
