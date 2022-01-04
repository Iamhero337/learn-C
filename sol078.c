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
int student_delete(Student s[], int n);
void student_list(Student s[], int n);
int student_search(Student s[], int n, int id);
void student_print(Student *s);

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
				if (student_delete(students, nstudent) == 1)
					nstudent -= 1;
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

void student_edit(Student s[], int n)
{
	int id, pos;
	Student stud;

	// 1. Ask for student ID
	printf("ID?: ");
	scanf("%d", &id);

	// 2. Find the location of student with id 'ID' in 's' (passed as argument)
	pos = student_search(s, n, id);
	if (pos == -1) {
		printf("Invalid ID\n");
		return;
	}

	student_print(&s[pos]);

	// 3. Ask for new details of student (use student_add function)
	student_add(&stud);

	// 4. Update the new student struct with old one in array 's'
	stud.id = id;
	s[pos] = stud;
}

int student_delete(Student s[], int n)
{
	// @NOTE Left the steps for you guys to think
	int id, pos;
	Student stud;

	// 1. Ask for student ID
	printf("ID?: ");
	scanf("%d", &id);

	// 2. Find the location of student with id 'ID' in 's' (passed as argument)
	pos = student_search(s, n, id);
	if (pos == -1) {
		printf("Invalid ID\n");
		return 0;
	}

	student_print(&s[pos]);

	/* Shift elements to left by 1 */
	for (int i = pos; i < n - 1; ++i)
		s[i] = s[i + 1];
	
	return 1;
}

int student_search(Student s[], int n, int id)
{
	int pos;

	pos = -1;
	for (int i = 0; i < n; ++i) {
		if (s[i].id == id) {
			pos = i;
			break;
		}
	}

	return pos;
}

void student_print(Student *s)
{
	printf("ID   : %d\n", s->id);
	printf("Name : %s\n", s->name);
	printf("Roll : %d\n", s->roll);
	printf("Score: %d\n", s->score);
}



