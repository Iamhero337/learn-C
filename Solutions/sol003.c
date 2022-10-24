#include <stdio.h>

int main()
{
	float l, b, area;

	printf("Length? ");
	scanf("%f", &l);
	printf("Breadth? ");
	scanf("%f", &b);

	area = l * b;

	printf("Area = %.4f\n", area);
	if (l == b)
		printf("Square\n");
	else
		printf("Rectangle\n");

	return 0;
}
