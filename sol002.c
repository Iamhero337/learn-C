#include <stdio.h>

int main()
{
	char name[128];
	int age, salary;

	printf(" Name: ");
	scanf("%s", name);
	printf("Age: ");
	scanf("%d", &age);
	printf("Salary: ");
	scanf("%d", &salary);

        printf("Name:         %s\n", name);
	printf("Age:          %d\n", age);
	printf("Salary:       %d\n", salary);
	printf("Designation:  ");
//How the designation is filled without any variables putting there???
	if (salary <= 10000)
		printf("Unknown\n");
	else if (salary <= 20000)
		printf("Intern\n");
	else if (salary <= 35000)
		printf("Jr. SDE\n");
	else
		printf("Product Manager\n");

	return 0;
}
