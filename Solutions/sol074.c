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

	if ((fp = fopen("student.db", "r")) == NULL) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}

	/* @NOTE fwrite may fail so it is good practice to always check for failure
	 * and handle that appropriatey */
	fread(&st, sizeof(st), 1, fp);

	/* Read student details from user */
	printf("Roll : %d\n", st.roll);
	printf("Name : %s\n", st.name);
	printf("Phone: %s\n", st.phone);

	fclose(fp);

	return 0;
}



