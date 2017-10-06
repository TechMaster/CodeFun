#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
typedef unsigned char BOOL;
#define true 1
#define false 0

typedef struct {
	char* name;
	int score;
	BOOL isMale;
} Student;

#endif // STUDENT_H_INCLUDED
