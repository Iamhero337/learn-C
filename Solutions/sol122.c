#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int **pascal_triangle(int n, int *nrow, int **ncol);

int main(int argc, char **argv)
{
	int n;
	int **triangle;
	int nrow, *ncol;
	
	scanf("%d", &n);

	triangle = pascal_triangle(n, &nrow, &ncol);

	for (int i = 0; i < nrow; ++i) {
		for (int j = 0; j < ncol[i]; ++j) {
			printf("%d ", triangle[i][j]);
		}
		puts("");
	}

	return 0;
}

int **pascal_triangle(int n, int *nrow, int **ncol)
{
	int **triangle;
	int *cols_in_rows;

	triangle = malloc(sizeof(int *) * n);
	cols_in_rows = malloc(sizeof(int) * n);

	assert(triangle != NULL);
	assert(cols_in_rows);

	for (int i = 0; i < n; ++i) {
		/* Store size of columns of ith row */
		cols_in_rows[i] = (i + 1);
		/* Create int array of size columns for the ith row of pascal's triangle */
		triangle[i] = malloc(sizeof(int) * cols_in_rows[i]);

		assert(triangle[i]);

		for (int j = 0; j <= i; ++j) {
			if (j - 1 >= 0 && j + 1 <= i)
				triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
			else 
				triangle[i][j] = 1;
		}
	}

	*ncol = cols_in_rows;
	*nrow = n;

	return triangle;
}
