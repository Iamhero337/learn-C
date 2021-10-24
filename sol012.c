#include <stdio.h>

int main()
{
	char ch;

	while ((ch = getchar()) != '\n') {
		if (ch >= '0' && ch <= '9')
			putchar('^');
		else
			putchar(' ');
	}

	puts("");

	return 0;
}
