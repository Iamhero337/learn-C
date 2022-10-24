#include <stdio.h>
#include <stdlib.h>



struct Fighter {
	char name[100];
	char country[100];
	int rank;
	double height;
	int weight_class; /* just use 150, 170, 180, .. */
};

int main(void)
{
	struct Fighter fighters[5];
	struct Fighter temp;

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
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 3; ++j){
	              if(fighters[j].rank > fighters[j + 1].rank){
	              	temp = fighters[j];
	              	fighters[j] = fighters[j + 1];
	              	fighters[j + 1] = temp;
	              }
	           }
	}
				
				
		

	printf("%-8s %-8s %-8s %-8s %-32s %-8s \n", 
			"SL.", "RANK", "HEIGHT", "WGHT.", "NAME", "COUNTRY");
	for (int i = 0; i < 5; ++i) {
		printf("%-8d %-8d %-8.2lf %-8d %-32s %-8s\n",
				i + 1, 
				fighters[i].rank,
				fighters[i].height,
				fighters[i].weight_class,
				fighters[i].name,
				fighters[i].country);
	}




	return 0;
}
