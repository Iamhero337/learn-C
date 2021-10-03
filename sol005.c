#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Enter three sides of triangle: \n");
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && a == c)
		printf("The triangle is Equilateral.\n");
	else if (a == b || a == c || b == c)
		printf("The triangle is Isosceles\n");
	else
		printf("The triangle is Scalence\n");

	return 0;
}
