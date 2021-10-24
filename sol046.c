#include <stdio.h>

int sub_string(char s[], char sub[]);

int main()
{
	char s[100], sub[100];

	printf("s: ");
	scanf("%s", s);
	printf("sub: ");
	scanf("%s", sub);

	printf("%d\n", sub_string(s, sub));

	return 0;
}

int sub_string(char s[], char sub[])
{
	int j, matched;

	/* @NOTE We can find the length of s and sub and check whether len(sub) > len(s)
	 * then reutrn -1 immediately, but I left it for efficiency reason */

	for (int i = 0; s[i] != '\0'; ++i) {
		if (s[i] != sub[0])
			continue;

		matched = 1;
		for (j = 0; sub[j] != '\0' && s[i + j] != '\0'; ++j) {
			if (s[i + j] != sub[j]) {
				matched = 0;
				break;
			}
		}
		/* If sub is now longer than s[i] onwards then there will never be any match */
		if (s[i + j] == '\0' && sub[j] != '\0')
			return -1;
		if (matched == 1)
			return i;
	}

	return -1;
}
