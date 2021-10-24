#include <stdio.h>

#define IN 0
#define OUT 1

int main()
{
	char ch;
	int state;

	state = OUT;

	while ((ch = getchar()) != EOF) {
		if (ch != ' ' && ch != '\t' && ch != '\n') {
			putchar(ch);
			state = IN;
		} else if (state == IN) {
			putchar('\n');
			state = OUT;
		}
	}

	return 0;
}
