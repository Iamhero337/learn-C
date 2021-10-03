#include <stdio.h>

int main()
{
	char choice;
	float fahr, cels;

	printf("Choice: ");
	scanf("%c", &choice);

	if (choice == 'c' || choice == 'C') {
		printf("Fahrenheit: ");
		scanf("%f", &fahr);
		cels = 5 / 9.0 * (fahr - 32);
		printf("Celsius: %.2f\n", cels);
	} else if (choice == 'f' || choice == 'F') {
		printf("Celsius: ");
		scanf("%f", &cels);
		fahr = (cels * 9 / 5.0) + 32;
		printf("Fahrenheit: %.2f\n", fahr);
	}

	return 0;
}
