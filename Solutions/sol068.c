#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *srcfp, *destfp;
	char *srcfile, *destfile;
	char ch;

	if (argc != 3) {
		printf("Usage: %s source destination\n", argv[0]);
		return 1;
	}

	srcfile = argv[1];
	destfile = argv[2];
	if ((srcfp = fopen(srcfile, "r")) == NULL) {
		perror("fopen error");
		return 1;
	}
	if ((destfp = fopen(destfile, "w")) == NULL) {
		perror("fopen error");
		return 1;
	}
	
	/* Copy file */
	while ((ch = getc(srcfp)) != EOF) {
		putc(ch, destfp);
	}

	fclose(srcfp);
	fclose(destfp);

	return 0;
}

