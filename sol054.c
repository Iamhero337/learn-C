#include <stdio.h>

int main()
{
	int a;
	int *aptr;

	aptr = &a;

	/* @TASK Now write the code below to print the content of aptr */
	printf("%p\n", aptr);

	/* @TASK Now write the code below to print the value of a using aptr */
	printf("%d\n", *aptr);

	/* @TASK Can you print the size of aptr using sizeof operator?
	 * If yes then write the code below */
	printf("%ld\n", sizeof(aptr));

	return 0;
}

