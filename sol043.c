#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int size);

int main()
{
	char line[MAXLINE];
	int len;

	while ((len = get_line(line, MAXLINE)) > 0) {
		if (len > 100)
			printf("%s", line);
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

