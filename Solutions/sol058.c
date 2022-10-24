#include <stdio.h>

int main()
{
	double d1, d2;
	double *ptr1, *ptr2;

	/* @TASK Assign the address of d1 in ptr1 and d2 in ptr2 */
	ptr1 = &d1;
	ptr2 = &d2;

	d1 = 1.0;
	d2 = 2.0;

	/* @TASK What will the below line print? */
	/* YOUR_ANSWER: 3.000000 */
	printf("%lf\n", *ptr1 + *ptr2);

	return 0;
}


