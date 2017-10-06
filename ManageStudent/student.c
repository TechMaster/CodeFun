#include "student.h"
#include <stdlib.h>
#include <stdio.h>

Student* createNewStudentFromConsole() {
  Student* student = (Student*) malloc(sizeof(Student));
  printf("Student name:\n");
	fgets(student->name, LENGTH, stdin);

	printf("Score:\n");
	scanf(" %d",&student->score);

	printf("Gender (M for male, else for female):\n");
	char c;
	scanf(" %c", &c);
	if (c == 'M') {
		student->isMale = true;
	} else {
		student->isMale = false;
	}

	return student;
}
