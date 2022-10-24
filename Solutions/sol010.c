#include <stdio.h>

int main()
{
	char ch;

	while ((ch = getchar()) != '\n') {
		putchar(ch);
		putchar(ch);
	}

	puts("");

	return 0;
}
