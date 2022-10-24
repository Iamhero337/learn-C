#include <stdio.h>
#include <stdlib.h>

#define ARRSIZE(var) ((sizeof(var)) / (sizeof(var[0])))

int main()
{
	int arr[5];
	FILE *fp;

	if ((fp = fopen("numbers.bin", "r")) == NULL) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}

	/* @NOTE Since we know the size (and content) of the file in advace
	 * from the question therefore we can write the code like this but it
	 * is not recommended way. Correct solution would be not expect the size of
	 * the file in advance, read one integer at a time and store it in the array
	 * one at a time and limit this step (let's say by 100 integers) */
	fread(arr, sizeof(arr), 1, fp);
	for (int i = 0; i < ARRSIZE(arr); ++i)
		printf("%d ", arr[i]);
	puts("");
	fclose(fp);

	return 0;
}

