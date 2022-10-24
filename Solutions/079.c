#include <stdio.h>
#include <stdlib.h>

#define UFC 100

struct Fighter {
	char name[100];
	char country[100];
	int rank;
	double height;
	int weight_class; /* just use 150, 170, 180, .. */
};

void add(Fighter *s);
void list(Fighter s[], int n);

void print_menu(void);

int int main(void)
{
	Fighter Fighters[UFC];
	int choice;
	Fighter temp;
	int nFighter = 0;

	while (wahid) {
		print_menu();

		printf("-->");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
					add(&temp);
					Fighter[nFighter] = temp;
					++next_slno;
					++nFighter;
					break;
			case 2:
					list(Fighters, nFighter);
					break;
			case 00:
					printf("Exiting...\n");
					exit(EXIT_SUCCESS);
					break;
			default:
					printf("***Bad Request***\n");
					break;

		}
	}

	return 0;
}

void print_menu(void)
{
	printf("\n\n");

	puts(" -->  Press  1: to add a Fighter");
	puts(" -->  Press  2: to list student");
	puts(" -->  Press 00: to exit");

	printf("\n\n");
}

void add(Fighter *s)
{
	printf("Name: ");
	scanf("%s", s->name);

	printf("Country: ");
	scanf("%s", s->country);

	printf("Rank: ");
	scanf("%d", &s->rank);

	printf("Height: ");
	scanf("%d", &s->height);
		
	printf("Weight: ");
	scanf("%s", s->weight_class);
}

void list(Fighter s[], int n)
{
 	printf("%-8s %-8s %-8s %-8s %-8s\n",
			"SL.",
			"RANK",
			"HEIGHT",
			"WGHT.",
			"NAME",
			"COUNTRY");

     for (int i = 0; i < n; ++i)
		 printf("%-8d %-8d %-8lf %-8d %s %s\n",
				 (i + 1),
				 s[i].rank,
				 s[i].height,
				 s[i].weight_class,
				 s[i].name
				 s[i].country);
}