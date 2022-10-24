#include <stdio.h>

#define MAXLINE 1000

int fget_line(FILE *fp, char line[], int size);
int get_line(char line[], int size);


int main(int argc, char *argv[])
{
	FILE *fp;
	char *file;
	char line[MAXLINE];

	if (argc != 2) {
		printf("Usage: %s file\n", argv[0]);
		return 1;
	}

	file = argv[1];
	if ((fp = fopen(file, "a+")) == NULL) {
		perror("fopen error");
		return 1;
	}

	while (fget_line(fp, line, MAXLINE) > 0)
		printf("%s", line);

	/* Read line from user and write to file */
	while (get_line(line, MAXLINE) > 0)
		fprintf(fp, "%s", line);

	fclose(fp);

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

