#include <stdio.h>

#define N 100

int main()
{
	int arr[N];
	int n, x;
	int found_pos = -1;

	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter n(1-%d): ", N);
	scanf("%d", &n);

	/* Checking n is in expected boundary, if not then exit prog */
	if (n < 1 || n > N) {
		/* @NOTE It is always good UX practice to tell the user
		 * what input program expects in case of error */
		printf("Invalid n, must be between 1 and %d\n", N);
		return -1;
	}

	/* Filling array with user input */
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	/* Finding x in the array */
	/* @NOTE This way of finding element in array is called Linear Search */
	for (int i = 0; i < n; ++i) {
		if (arr[i] == x) {
			found_pos = i;
			break;
		}
	}
	printf("%d\n", found_pos);

	return 0;
}
