#include <stdio.h>

int isvowel(char ch);

int main()
{
	printf("%d\n", isvowel('a'));
	printf("%d\n", isvowel('B'));
	printf("%d\n", isvowel('6'));
	printf("%d\n", isvowel(' '));

	return 0;
}

int isvowel(char ch)
{
	switch (ch) {
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			return 1;
	}

	return 0;
}
