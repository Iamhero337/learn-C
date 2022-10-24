#include <stdio.h>

int main()
{
	char 		name[256];
	int 		roll;
	char 		class[8];
	int 		eng, math, phy, bio;
	float 		per;
	char 		grade;

	printf("Name: ");
	scanf("%s", name);
	printf("Roll: ");
	scanf("%d", &roll);
	printf("Class: ");
	scanf("%s", class);

	printf("English: ");
	scanf("%d", &eng);
	printf("Math: ");
	scanf("%d", &math);
	printf("Physics: ");
	scanf("%d", &phy);
	printf("Biology: ");
	scanf("%d", &bio);

	per = (math + eng + phy + bio) / 4.0;
	if (per >= 80)
		grade = 'A';
	else if (per >= 60)
		grade = 'B';
	else if (per >= 50)
		grade = 'C';
	else if (per >= 45)
		grade = 'D';
	else
		grade = 'F';

	printf("+------------------------------------+\n");
	printf("| Roll:         %-20d |\n", roll);
	printf("| Name:         %-20s |\n", name);
	printf("| Class:        %-20s |\n", class);
	printf("| Percentage:   %05.2f%-15c |\n", per, '%'); 
	printf("| Grade:        %-20c |\n", grade);
	printf("+------------------------------------+\n");
	
	/* @NOTE In the case of printing Percentage, notice how I used 5 columns width
	 * for showing percentage in the form xx.xx and then 15 columns width for '%'
	 * character which sums upto total 20 */

	return 0;
}
