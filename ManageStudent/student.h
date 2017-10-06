#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

//Dinh nghia kieu BOOL moi
typedef unsigned char BOOL;
#define true 1
#define false 0
#define LENGTH 255
typedef struct {
	char name[LENGTH];
	int score;
	BOOL isMale;
} Student;

Student* createNewStudentFromConsole();
#endif // STUDENT_H_INCLUDED
