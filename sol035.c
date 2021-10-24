#include <stdio.h>

#define N 100

int main()
{
	int arr[N];
	int n;
	int neven, nodd;

	neven = nodd = 0;
	printf("Enter size of array n (1-%d): ", N);
	scanf("%d", &n);

	/* @NOTE Checking n is in the boundary.
	 *   First time validating user input.
	 *   It is a good programming practice to validate user input
	 *   before using it. */
	if (n < 1 || n > N) {
		printf("Invalid value of n. Should be in range 1-%d\n", N);
		return -1;
	}

	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n; ++i) {
		if (arr[i] % 2 == 0)
			++neven;
		else
			++nodd;
	}

	printf("Even = %d\n", neven);
	printf("Odd  = %d\n", nodd);

	return 0;
}
