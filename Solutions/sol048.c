#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	int arr[n][n];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			scanf("%d", &arr[i][j]);

	// Sort
	for (int i = 0; i < n * n - 1; ++i) {
		for (int j = 0; j < n * n - i - 1; ++j) {
			int r = j / n;
			int c = j % n;
			int rr = r, cc = c + 1;
			if (cc == n) {
				cc = (c + 1) % n;
				rr = r + 1;
			}

			if (arr[r][c] > arr[rr][cc]) {
				int temp = arr[r][c];
				arr[r][c] = arr[rr][cc];
				arr[rr][cc] = temp;
			}
		}
	}

	// Print
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	return 0;
}
