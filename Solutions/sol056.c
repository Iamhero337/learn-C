#include <stdio.h>

int main()
{
	char string[] = "HELLO!";

	/* @TASK Write the statement below to show what is the value of string
	 * and also the value of &string[0], are the same? */
	printf("%p\n", string);
	printf("%p\n", &string[0]);
	/* YES they are same */

	/* @TASK  Print every characters of string using pointer arithmetic,
	 * don't use array subscript notaion i.e. []. */
	for (int i = 0; *(string + i) != '\0'; ++i)
		putchar(*(string + i));
	puts("");

	return 0;
}


