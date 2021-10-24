#include <stdio.h>

/*
   1 - x^2/2! + x^4/4! ...
   */

int main()
{
	int n, x, y, i, j, sign;
	double term, series, fact, power;

	printf("Enter n and x: ");
	scanf("%d %d", &n, &x);

	series = 1;
	sign = -1;
	for (i = 1, y = 2; i < n; ++i, y += 2) {
		power = 1;
		/* Find power x^i */
		for (j = 0; j < y; ++j)
			power *= x;

		/* Find factorial of i */
		fact = 1;
		j = y;
		while (j > 0) {
			fact *= j;
			--j;
		}

		term = power / fact * sign;
		series += term;
		sign *= -1;

		/* Uncomment it to see what this loop is doing */
		// printf("%d: %10.4lf   %10.4lf\n", i, power, term);
	}

	printf("%.4f\n", series);

	return 0;
}
