#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int size);

void reverse_print_lines(void);

int main(void)
{
	reverse_print_lines();

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

void reverse_print_lines(void)
{
	char line[MAXLINE];
	int len;

	len = get_line(line, MAXLINE);
	if (len > 0)
		reverse_print_lines();
	else
		return;

	printf("%s", line);
}
