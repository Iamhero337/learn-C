#include <stdio.h>

int main()
{
	char ch;

	while ((ch = getchar()) != EOF) {
		if (ch >= 'a' && ch <= 'z')
			ch = ch - ('a' - 'A');
		putchar(ch);
	}

	return 0;
}
