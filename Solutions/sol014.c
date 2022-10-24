#include <stdio.h>

int main()
{
	char ch;
	int nline = 0;

	while ((ch = getchar()) != EOF) {
		if (ch == '\n')
			++nline;
	}

	if (nline > 1)
		printf("%d Lines\n", nline);
	else
		printf("%d Line\n", nline);

	return 0;
}
