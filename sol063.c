#include <stdio.h>

int main()
{
	char o;
	double p, v;
	int n;

	scanf("%lf %d", &v, &n);

	for (int i = 0; i < n; ++i) {
		scanf(" %c", &o);
		scanf("%lf", &p);

		switch (o) {
			case '+':
				v += p;
				break;
			case '-':
				v -= p;
				break;
			case '*':
				v *= p;
				break;
			case '/':
				v /= p;
				break;
		}
	}

	printf("%.2lf\n", v);

	return 0;
}
