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

	if ((fp = fopen("student.db", "r")) == NULL) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}

	/* Read entire student struct from file in one go */
	fread(st, sizeof(struct student), 3, fp);

	/* Read student details from user */
	for (int i = 0; i < 3; ++i) {
		printf("Roll : %d\n", st[i].roll);
		printf("Name : %s\n", st[i].name);
		printf("Phone: %s\n", st[i].phone);
		puts("");
	}

	fclose(fp);

	return 0;
}




