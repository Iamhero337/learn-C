#include <stdio.h>
#include <stdbool.h>

#define N 100

bool array_insequence(int *arr, int n, int *seq, int s);

int main()
{
	int n, s;
	int arr[N], seq[N];

	scanf("%d", &n);
	scanf("%d", &s);
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	for (int i = 0; i < s; ++i)
		scanf("%d", &seq[i]);

	printf("%d\n", (int) array_insequence(arr, n, seq, s));


	return 0;
}

bool
array_insequence(int *arr, int n, int *seq, int s)
{
	int i, j;

	i = j = 0;
	
	while (i < n && j < s) {
		if (arr[i] == seq[j])
			++j;
		++i;
	}

	return j == s;
}
