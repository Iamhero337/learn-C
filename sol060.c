#include <stdio.h>

int main()
{
	char str1[] = "Hello World";
	char *str2  = "Hello world";

	/* @TASK What this below code does?
	 * Is there any problem with the below code?
	 * If YES then what and why */
	/* YOUR_ANSWER: the second assignment is not possible and will cause
	 * segmentation fault, because the string literal in str2 is at read
	 * only memory and this memory can not be overwritten. */

	*(str1 + 0) = 'B';
	*(str2 + 0) = 'B';

	return 0;
}

