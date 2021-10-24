#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int size);
void reverse_string(char s[]);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0) {
		/* If there is a new line char only then override it with NUL byte */
		if (line[len - 1] == '\n')
			line[len - 1] = '\0';
		reverse_string(line);
		printf("%s\n", line);
	}

	return 0;
}

int get_line(char line[], int size)
{
	int i;
	char ch;

	i = 0;
	do
	{
		ch = getchar();
		line[i] = ch;
		++i;
	} while (ch != EOF && ch != '\n' && i < size - 1);

	if (ch == EOF)
		line[--i] = '\0';
	else
		line[i] = '\0';

	return i;
}

void reverse_string(char s[])
{
	int len = 0;
	char tmp;
	
	while (s[len++] != '\0')
		;

	for (int i = 0, j = len - 2; i < j; ++i, --j) {
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
