#include <stdio.h>

#define MAXLINE 1000

int fget_line(FILE *fp, char line[], int size);

int main()
{
	char line[MAXLINE];
	FILE *fp;

	if ((fp = fopen("/usr/share/dict/words", "r")) == NULL) {
		perror("fopen error");
		return 1;
	}

	while (fget_line(fp, line, MAXLINE) > 0)
		printf("%s", line);

	return 0;
}

int fget_line(FILE *fp, char line[], int size)
{
	int i;
	char ch;

	i = 0;
	do
	{
		ch = getc(fp);
		line[i] = ch;
		++i;
	} while (ch != EOF && ch != '\n' && i < size - 1);

	if (ch == EOF)
		line[--i] = '\0';
	else
		line[i] = '\0';

	return i;
}


