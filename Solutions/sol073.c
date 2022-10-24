#include <stdio.h>
#include <stdlib.h>

struct student {
	int roll;
	char name[100];
	char phone[16];
};


int main()
{
	struct student st;
	FILE *fp;

	if ((fp = fopen("student.db", "w")) == NULL) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}

	/* Read student details from user */
	printf("Roll : ");
	scanf("%d", &st.roll);
	printf("Name : ");
	scanf("%s", st.name);
	printf("Phone: ");
	scanf("%s", st.phone);

	/* @NOTE fwrite may fail so it is good practice to always check for failure
	 * and handle that appropriatey */
	fwrite(&st, sizeof(st), 1, fp);

	fclose(fp);

	return 0;
}


