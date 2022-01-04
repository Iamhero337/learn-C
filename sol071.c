#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	FILE *fp;

	if ((fp = fopen("numbers.bin", "w")) == NULL) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}

	fwrite(arr, sizeof(arr), 1, fp);
	fclose(fp);

	return 0;
}
