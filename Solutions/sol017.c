#include <stdio.h>

int main()
{
	int n;
	int is_prime;

	is_prime = 1;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 2; i < n; ++i) {
		if (n % i == 0) {
			is_prime = 0;
			break;
		}
	}

	if (is_prime == 1)
		printf("PRIME NUMBER\n");
	else
		printf("NOT PRIME NUMBER\n");

	return 0;
}
