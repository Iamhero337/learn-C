#include <stdio.h>

int main()
{
	char ch;
	int count = 0;

	ch = getchar();
	while (ch != '\n') {
		count++;
		ch = getchar();
	}

	printf("Total = %d\n", count);

	return 0;
}
