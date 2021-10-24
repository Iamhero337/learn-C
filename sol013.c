#include <stdio.h>

int main()
{
	char ch;
	int nvowel = 0;

	while ((ch = getchar()) != EOF) {
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
				ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			++nvowel;
	}

	if (nvowel == 0)
		printf("Not a single vowel found.\n");
	else
		printf("There are %d vowels present in the given input.\n", nvowel);

	return 0;
}
