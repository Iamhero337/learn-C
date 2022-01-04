#include <stdio.h>

int main()
{
	/* @TASK Declare a char pointer "str" and initialise it with your name */
	char *str = "My name";

	/* @TASK Write a code to print every character of that pointer variable
	 * You can only use putchar() function to print a char.
	 * Write the code in such a way that you would not need any extra variable */
	while (*str) {
		putchar(*str);
		++str;
	}

	return 0;
}


