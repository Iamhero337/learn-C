#include <stdio.h>

int main()
{
	char ch;
	/* @TASK Declare a character pointer variable here */
	char *ptr;

	/* @TASK Store the address of character variable ch in newly declared variable */
	ptr = &ch;

	/* @TASK Print the address of ch variable using only ch variable */
	printf("%p\n", &ch);

	/* @TASK Verify that the address of ch and content inside pointer variable are same
	 * using if condition */
	if (&ch == ptr)
		printf("SAME\n");
	else
		printf("DIFFERENT\n");


	/* @TASK Now write the code below to print the value of ch using pointer variable */
	printf("%c\n", *ptr);

	return 0;
}


