/* @TASK Write below what will the function print_array will print: */
/* @YOUR_ANSWER: 45.230000, 44.900000, 12.000000 */

#include <stdio.h>

void print_array(double *arr, int size);

int main()
{
	double darr[] = {1.50, 22.45, 45.23, 55.90, 12.00};

	/* @TASK What &darr[2] means here? */
	/* Address of the element at index 2 of darrg */
	print_array(&darr[2], 3);

	return 0;
}

void print_array(double *arr, int size)
{
	double *ptr = arr;
	
	while (ptr != arr + size) {
		printf("%lf\n", *ptr);
		ptr++;
	}
}


