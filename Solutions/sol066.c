#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int size);

int main()
{
	char line[MAXLINE];
	FILE *fp;
	
	if ((fp = fopen("para.txt", "w")) == NULL) {
		perror("fopen error");
		return 1;
	}

	while (get_line(line, MAXLINE) > 0)
		fprintf(fp, "%s", line);

	fclose(fp);

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

