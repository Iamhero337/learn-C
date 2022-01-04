#include <stdio.h>
#include <stdlib.h>

#define N 100

int *merge_array(int *arr1, int *arr2, int n, int m);

int main()
{
	int n, m;
	int arr1[N], arr2[N];
	int *merged;
	
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr1[i]);

	scanf("%d", &m);
	for (int i = 0; i < m; ++i)
		scanf("%d", &arr2[i]);

	merged = merge_array(arr1, arr2, n, m);
	for (int i = 0; i < n + m; ++i)
		printf("%d ", merged[i]);
	puts("");

	return 0;
}

int *merge_array(int *arr1, int *arr2, int n, int m)
{
	int i, j, k, l;
	int *merged = malloc(sizeof(int) * (n + m));

	for (i = 0, j = 0, k = 0, l = 0; l < n + m; ++l) {
		if (i < n && arr1[i] < arr2[j]) {
			merged[k] = arr1[i];
			++i;
			++k;
		} else if (j < m) {
			merged[k] = arr2[j];
			++j;
			++k;
		}
	}

	while (i < n) {
		merged[k] = arr1[i];
		++i;
		++k;
	}
	while (j < m) {
		merged[k] = arr2[j];
		++j;
		++k;
	}

	return merged;
}

