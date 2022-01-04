#include <stdio.h>
#include <stdlib.h>

struct student {
	int roll;
	char name[100];
	char phone[16];
};


int main()
{
	struct student st[3];
	FILE *fp;

	if ((fp = fopen("student.db", "w")) == NULL) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}

	/* Read student details from user */
	for (int i = 0; i < 3; ++i) {
		printf("Roll : ");
		scanf("%d", &st[i].roll);
		printf("Name : ");
		scanf("%s", st[i].name);
		printf("Phone: ");
		scanf("%s", st[i].phone);
		puts("");
	}
	/* @NOTE fwrite may fail so it is good practice to always check for failure
	 * and handle that appropriatey */
	fwrite(st, sizeof(struct student), 3, fp);

	fclose(fp);

	return 0;
}



