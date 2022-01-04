#include <stdio.h>

int main()
{
	char *s;
	char foo[] = "Hello World";

	s = foo;
	printf("s is %s\n", s);

	printf("s[0] is %c\n", s[0]);

	return 0;
}

