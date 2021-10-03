#include <stdio.h>

int main()
{
	char ch;
	int nspaces = 0;

	while ((ch = getchar()) != '\n')
		if (ch == ' ')
			++nspaces;

	if (nspaces > 1)
		printf("Total %d spaces found\n", nspaces);
	else
		printf("Total %d space found\n", nspaces);

	return 0;
}
