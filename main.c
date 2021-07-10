#include <stdio.h>
#include <stdlib.h>
struct student {
	char student_name[20];
	int id;
	int birthdate_day, birthdate_month, bithdate_year;
	int scoreOf_lastyear;
};
struct node {
	struct student data;
	struct node* next;
};
