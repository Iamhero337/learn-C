#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

void file_cat(FILE *fp);

int fget_line(FILE *fp, char line[], int size);

int main(int argc, char *argv[])
{
	FILE *fp;
	char *file;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s file\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	file = argv[1];
	if ((fp = fopen(file, "r")) == NULL) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}
	
	file_cat(fp);
	file_cat(fp);

	fclose(fp);

	return 0;
}

void file_cat(FILE *fp)
{
	char line[MAXLINE];
	fseek(fp, 0, SEEK_SET);
	while (fget_line(fp, line, MAXLINE) > 0)
		printf("%s", line);
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

