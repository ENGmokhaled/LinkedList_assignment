git #include <stdio.h>
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
int m, i;
int n;
struct node* new_node;
struct node* head;
struct node* tail;
struct student* temp;
void fund(void);
struct student insert(struct student y);
void insert_end_d(struct student* point, int m, struct student x);
void insert_first_d(struct student* point, int m, struct student x);
void insert_middle_d(struct student* point, int m, struct student x);


int main()
{
        printf("welcome dr.omar \n we are 3 students \n name1:sheref omar bkhet  sec:2   bn:31 \n name2:yasmin yosri sadek   sec:4    bn:46 \n name3:yomna ahmed mohamed   sec:4    bn:48 \n\n");
	char z;
	printf("press l to use liked list , press d to use dynamic array \n");
	scanf("%c", &z);
	switch (z)
	{
	case 'l':
	case 'L':
		funl();
		break;
	case 'd':
	case 'D':
		fund();
		break;

	}

	//*********************************************************************
		//************************************************************************************ Test Dynamic Array

	/*for (i = 1;i <= n;i++)
	{
		printf("Name of Student %i: ", i);
		printf("%s\n", (((temp + (i - 1))->student_name)));
	}*/

	//************************************************************************************
	return 0;
}

void fund(void)
{
	int h;
	struct student* ptr;
	struct student s;
	s.birthdate_day = 0;
	s.birthdate_month = 0;
	s.bithdate_year = 0;
	s.id = 0;
	s.scoreOf_lastyear = 0;
	printf("enter number of students \n ");
	scanf("%i", &n);
	ptr = (struct student*)malloc(n * sizeof(struct student));
	int k;
	for (i = 1;i <= n;i++)
	{
		*(ptr + (i - 1)) = insert(s);

	}

	printf("to insert at first press 1 \n to insert at end press 2 \n to insert at middle press 3 \n to exit press 0 \n");
	scanf("%d", &h);
	switch (h)
	{
	case 1:
	{
		insert_first_d(ptr, n, s);
		n++;
		break;
	}
	case 2:
	{
		insert_end_d(ptr, n, s);
		n++;
		break;
	}
	case 3:
	{
		insert_middle_d(ptr, n, s);
		n++;
		break;
	}
	case 0:
		break;
	}

}

void insert_end_d(struct student* point, int m, struct student x)
{
	m++;
	/*struct student* temp;*/
	printf("enter the new student\n");
	temp = (struct student*)realloc(point, (m) * sizeof(struct student));
	*(temp + m-1) = insert(x);
	/*free(point);*/
	/*printf("%i", temp->id);*/


}

void insert_first_d(struct student* point, int m, struct student x)
{
	m++;
	int k;
	/*struct student* temp;*/
	temp = (struct student*)realloc(point, (m) * sizeof(struct student));
	for (k = m-1;k >= 1;k--)
	{
		*(temp + k) = *(temp + (k - 1));

	}
	printf("enter the new student \n");
	*temp = insert(x);
}

void insert_middle_d(struct student* point, int m, struct student x)
{
	int k;
	m++;
	/*struct student* temp;*/
	temp = (struct student*)realloc(point, (m) * sizeof(struct student));
	if ((m) % 2 == 0) {
		for (k = m-1;k > (m) / 2;k--)
		{
			*(temp + k) = *(temp + (k - 1));

		}
		printf("enter the new student \n");
		*(temp + ((m) / 2)) = insert(x);
	}
	else
	{
		for (k = m-1;k > m / 2;k--)
		{
			*(temp + k) = *(temp + (k - 1));

		}
		printf("enter the new student \n");
		*(temp + (m / 2)) = insert(x);
	}
}

struct student insert(struct student y)
{
	printf("enter name of student %i\n", i);
	fflush(stdin);
	scanf("%*c");
	fgets(y.student_name, sizeof(y.student_name), stdin);
	printf("enter id of student %i\n", i);
	scanf("%i", &(y.id));
	printf("enter day of the birth of the student %i\n", i);
	scanf("%i", &(y.birthdate_day));
	printf("enter month of the birth of the student %i\n", i);
	scanf("%i", &(y.birthdate_month));
	printf("enter year of the birth of the student %i\n", i);
	scanf("%i", &(y.bithdate_year));
	printf("enter score of last year of the student %i\n", i);
	scanf("%i", &(y.scoreOf_lastyear));
	return y;
}

