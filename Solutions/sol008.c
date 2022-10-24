#include <stdio.h>

int main()
{
	int lower, upper;
	char ch;
	
	lower = upper = 0;

	while ((ch = getchar()) != '\n') {
		if (ch == 'a')
			++lower;
		else if (ch == 'A')
			++upper;
	}

	printf("Total %d 'A' found\n", upper);
	printf("Total %d 'a' found\n", lower);

	return 0;
}
