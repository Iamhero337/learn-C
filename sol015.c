#include <stdio.h>

int main()
{
	char ch, last;

	ch = getchar();
	/* Initialising with any char in last */
	last = 'a';

	while (ch != EOF) {
		if (ch != ' ')
			putchar(ch);
		else if (last != ' ')
			putchar(ch);

		last = ch;
		ch = getchar();
	}

	return 0;
}
