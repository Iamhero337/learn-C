#include <stdio.h>

int main()
{
	char *s;
	char foo[] = "Hello World";

	s = &foo;
	printf("s is %s\n", s);

    s = &foo;
	printf("s[0] is %s\n", s);

	return 0;
}