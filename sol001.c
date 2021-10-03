#include <stdio.h>

int main()
{
	char name[256];
	int age, salary;

	printf("Employee name?: ");
	scanf("%s", name);
	printf("Age?: ");
	scanf("%d", &age);
	printf("Salary?: ");
	scanf("%d", &salary);

	printf("\n\n");
	printf("Name:          %s\n", name);
	printf("Age:           %d\n", age);
	printf("Salary:        %d\n", salary);

	return 0;
}
