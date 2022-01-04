#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str1[100], str2[100];
	char *ptr;

	printf("str1: ");
	scanf("%s", str1);
	printf("str2: ");
	scanf("%s", str2);

	ptr = malloc(strlen(str1) + strlen(str2) + 1);
	strcpy(ptr, str1);
	strcat(ptr, str2);
	printf("%s\n", ptr);

	return 0;
}

