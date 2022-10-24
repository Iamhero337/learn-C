#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

typedef struct student {
	int id;
	char name[100];
	int roll;
	int score;

} Student;

/* Will be set by main function after finding it from file */
int next_id;



void student_add(Student *s);
void student_list(FILE *fp);
void student_edit(FILE *fp);
void student_delete(FILE *fp);
void student_print(Student *s);
int  student_search(FILE *fp, int id);
void print_menu(void);

int main(void)
{
	int choice, err;
	Student temp;
	FILE *fp;

	 /* @NOTE Handling file opening correctly
	  * mode "a+" wont fulfil our requirements since this will
	  * always write data to the end of the file but in case of
	  * delete we do want to write data in arbitrary places but with
	  * "a+" mode option, it is not possible */
	fp = fopen("student.db", "r+");
	/* If fp is NULL and errno is EEXIST that means file does not
	 * exist so open the file with "w+" mode otherwise there is some
	 * problem, exit out of the program */
	if (fp == NULL && errno == ENOENT) {
		fp = fopen("student.db", "w+");
		if (fp == NULL) {
			perror("fopen: file creation failure");
			exit(EXIT_FAILURE);
		}
	} else if (fp == NULL) {
		perror("fopen");
		exit(EXIT_FAILURE);
	}

	fprintf(stderr, "ftell1: %lu\n", ftell(fp));

	/* Guess next_id by reading the last student's ID from file */
	fseek(fp, -sizeof(Student), SEEK_END);
	err = fread(&temp, sizeof(temp), 1, fp);
	if (err > 0)
		next_id = temp.id + 1;
	else
		next_id = 1;
	fseek(fp, 0, SEEK_SET);


	while (1) {
		print_menu();

		printf(" > ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				student_add(&temp);
				temp.id = next_id;
				fseek(fp, 0, SEEK_END);
				fwrite(&temp, sizeof(temp), 1, fp);
				++next_id;
				break;
			case 2:
				student_edit(fp);
				break;
			case 3:
				student_delete(fp);
				break;
			case 4:
				student_list(fp);
				break;
			case 99:
				printf("Exiting...\n");
				exit(EXIT_SUCCESS);
				break;
			default:
				printf("*** Invalid choice ***\n");
				break;
		}

	}

	return 0;
}

void print_menu(void)
{
	printf("\n\n");

	puts(" o  Press  1: to add student");
	puts(" o  Press  2: to edit student");
	puts(" o  Press  3: to delete student");
	puts(" o  Press  4: to list student");
	puts(" o  Press 99: to exit");

	printf("\n\n");
}

void student_add(Student *s)
{
	// 1. Input student details
	printf("Name: ");
	scanf("%s", s->name);

	printf("Roll: ");
	scanf("%d", &s->roll);

	printf("Score: ");
	scanf("%d", &s->score);
}

void student_list(FILE *fp)
{
	Student stud;
 	printf("%-8s %-8s %-8s %-8s\n",
			"ID",
			"ROLL",
			"SCORE",
			"NAME");

	/* 1. SEEK_SET 0 */
	fseek(fp, 0, SEEK_SET);
	while (fread(&stud, sizeof(stud), 1, fp) > 0) {
		 printf("%-8d %-8d %-8d %s\n",
				 stud.id,
				 stud.roll,
				 stud.score,
				 stud.name);
	}
}

void student_edit(FILE *fp)
{
	Student st;
	int id;
	int offset;

	printf("ID: ");
	scanf("%d", &id);

	/* student_search() will leave the file cursor position at the beginning
	 * of the student struct where the ID found */
	offset = student_search(fp, id);
	if (offset == -1) {
		printf("Invalid ID\n");
		return;
	}
	student_add(&st);
	st.id = id;
	fwrite(&st, sizeof(Student), 1, fp);
}

void student_delete(FILE *fp)
{
	Student st;
	int id;
	int offset;

	printf("ID: ");
	scanf("%d", &id);

	/* student_search() will leave the file cursor position at the beginning
	 * of the student struct where the ID found */
	offset = student_search(fp, id);
	if (offset == -1) {
		printf("Invalid ID\n");
		return;
	}
	/* Move forward one step (skipping the deletable item) */
	/*
	 * @NOTE Delete logic
	 * @TODO
	 * +----+----+----+----+----+----+----+----+----+----+----+----+----+----+
	 * |    |    |    |    |    |  D |    |    |    |    |    |    |    |    |
	 * +----+----+----+----+----+----+----+----+----+----+----+----+----+----+
	 *                            ^
	 *                        Deletable
	 *
	 */
	fseek(fp, sizeof(st), SEEK_CUR);
	while (fread(&st, sizeof(st), 1, fp) > 0) {
		fseek(fp, sizeof(st) * -2, SEEK_CUR);
		fwrite(&st, sizeof(st), 1, fp);
		fseek(fp, sizeof(st), SEEK_CUR);
	}
}

int student_search(FILE *fp, int id)
{
	Student st;

	fseek(fp, 0, SEEK_SET);
	while (fread(&st, sizeof(st), 1, fp) > 0) {
		if (st.id == id) {
			fseek(fp, -sizeof(st), SEEK_CUR);
			return ftell(fp);
		}
	}

	return -1;
}

void student_print(Student *s)
{
	printf("ID   : %d\n", s->id);
	printf("Name : %s\n", s->name);
	printf("Roll : %d\n", s->roll);
	printf("Score: %d\n", s->score);
}



