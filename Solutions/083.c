#include <stdio.h>
#include <stdlib.h>
#include<string.h>



struct Fighter {
	char name[100];
	char country[100];
	int rank;
	double height;
	int weight_class; /* just use 150, 170, 180, .. */
};

int main(int argc, char *argv[])
{
	struct Fighter fighters[5];
	struct Fighter temp;
	
	if(argc !=2){
		printf("Usage %s filepath\n", argv[0]);
		return 1;
	}

	for (int i = 0; i < 5; ++i) {
		printf("Name        : ");
		scanf("%s", fighters[i].name);
		printf("Country     : ");
		scanf("%s", fighters[i].country);
		printf("Rank        : ");
		scanf("%d", &fighters[i].rank);
		printf("Height      : ");
		scanf("%lf", &fighters[i].height);
		printf("Weight class: ");
		scanf("%d", &fighters[i].weight_class);
		puts("");
	}
	if (strcmp(argv[1], "weight") == 0){
		
		printf("%-8s %-8s %-8s %-8s %-32s %-8s \n", 
			"WEIGHT","SL", "RANK", "HEIGHT", "NAME", "COUNTRY");
		for (int i = 0; i < 5; ++i) {
			printf("%-8d %-8d %-8.2lf %-8d  %-32s %-8s\n",
				fighters[i].weight_class,
				i + 1, 
				fighters[i].height,
				fighters[i].rank,
				fighters[i].name,
				fighters[i].country);
		}
	}
	else if (strcmp(argv[1], "height") == 0){
		
		printf("%-8s %-8s %-8s %-8s %-32s %-8s \n", 
			"HEIGHT", "SL.", "RANK", "WEIGHT", "NAME", "COUNTRY");
		for (int i = 0; i < 5; ++i) {
			printf("%-8.2lf %-8d %-8d  %-8d %-32s %-8s\n",
				fighters[i].height,
				i + 1, 
				fighters[i].rank,
				fighters[i].weight_class,
				fighters[i].name,
				fighters[i].country);
		}
	}
	else if (strcmp(argv[1], "rank") == 0){
		printf("%-8s %-8s %-8s %-8s %-32s %-8s \n", 
			"RANK", "SL.", "HEIGHT", "WEIGHT", "NAME", "COUNTRY");
		for (int i = 0; i < 5; ++i) {
			printf("%-8d %-8d %-8.2lf %-8d %-32s %-8s\n",
				fighters[i].rank,
				i + 1, 
				fighters[i].height,
				fighters[i].weight_class,
				fighters[i].name,
				fighters[i].country);
		}
	}
	else {
		printf("Invalid column name\n");
	}

	
	return 0;
}

