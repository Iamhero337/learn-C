#include <stdio.h>
#include <stdlib.h>

#define STUD_SIZE 100

typedef struct student {
	int id;
	char name[100];
	int roll;
	int score;

} Student;

int next_id = 1;



void student_add(Student *s);
void student_edit(Student s[], int n);
void student_delete(Student s[], int n);
void student_list(Student s[], int n);

void student_print(Student *s);
void student_read(Student *s);

void print_menu(void);

int main(void)
{
	Student students[STUD_SIZE];
	int nstudent = 0;
	int choice;
	Student temp;

	while (1) {
		print_menu();

		printf(" > ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				student_add(&temp);
				temp.id = next_id;
				students[nstudent] = temp;
				++next_id;
				++nstudent;
				break;
			case 2:
				student_edit(students, nstudent);
				break;
			case 3:
				student_delete(students, nstudent);
				break;
			case 4:
				student_list(students, nstudent);
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

void student_list(Student s[], int n)
{
 	printf("%-8s %-8s %-8s %-8s\n",
			"ID",
			"ROLL",
			"SCORE",
			"NAME");

     for (int i = 0; i < n; ++i)
		 printf("%-8d %-8d %-8d %s\n",
				 s[i].id,
				 s[i].roll,
				 s[i].score,
				 s[i].name);
}

void student_edit(Student s[], int id)
{
	// @TODO
	// 1. Ask for student ID
	// 2. Find the location of student with id 'ID' in 's' (passed as argument)
	// 3. Ask for new details of studnet (use student_add function)
	// 4. Update the new student struct with old one in array 's'
	
}

void student_delete(Student s[], int id)
{
	// @TODO
	// @NOTE Left the steps for you guys to think
}





