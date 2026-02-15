/*
* Name: student_record_management.c
* Purpose: simple calculator app
* Author: YT
*/

#include <stdlib.h>
typedef struct address {
	char *village;
	char *gewog;
	char *dzongkhag;
} address_t;

typedef struct student_record {
	int id;
	char *fname;
	char *lname;
	int age;
	address_t address;
}student_t;


student_t *create_student(int id, const char *fname, const char *lname, int age, const char *village, const char *gewog, const char *dzongkhag) {
	// assign dynamic memory of size of student_t
	student_t *s = malloc(sizeof(student_t));
	return s;
}
