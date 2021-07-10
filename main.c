#include <stdio.h>
#include <stdlib.h>

//create a structure representing student information
    struct student_data
{
   char student_name[70];
   int student_ID;
   int student_birth_day;
   int student_birth_month;
   int student_birth_year;
   int student_lastyear_score;
};
int main()
{
    int n,type;

     //welcome text
    printf("welcome to our project with DR.omar nasr\n");

    // what is the type of data structure to be used
    first:
    printf("what is the type of data structure that will be used\n");
    printf("press 1 to create dynamic array\n");
    printf("press 2 to use linked list\n");
    scanf("%d", &type);

    //use dynamic array
    if(type==1)
        {
        printf("dynamic array\n");
         printf("%s","Enter the number of students at the beginning \n");
    scanf("%d",&p);
int i=0;
    arr_student_data = (struct student_data*)malloc(p*sizeof(struct student_data));
    for ( i = 0; i <= p-1 ; i++)
    {printf("\nEnter details of student %d\n\n", i);
        printf("Enter name: ");
        scanf("%s", arr_student_data[i].student_name);
        printf("Enter ID: ");
        scanf("%d", &arr_student_data[i].student_ID);
        printf("Enter birthday: ");
        scanf("%d", &arr_student_data[i].student_birth_day);
        printf("Enter birth month: ");
        scanf("%d", &arr_student_data[i].student_birth_month);
        printf("Enter birth year: ");
        scanf("%d", &arr_student_data[i].student_birth_year);
        printf("Enter last year score: ");
        scanf("%d", &arr_student_data[i].student_lastyear_score);}
        printf("%s\t%s\t%s\t%s\t%s\t%s\n","Name","ID","Birthday","Birth month","Birth year","Last year score");
        for(int i = 0; i < p; i++ )
    {
        printf("%s\t%d\t%.2d\t%s\t%.2d\t%s\t%.4d\t%s\t%.d\n",
        arr_student_data[i].student_name, arr_student_data[i].student_ID, arr_student_data[i].student_birth_day,"     ", arr_student_data[i].student_birth_month,"     ", arr_student_data[i].student_birth_year, "     ",arr_student_data[i].student_lastyear_score);
    }
end:
printf("%s","if you want to insert more student at any position enter 1\n if you want to insert more student at first enter 2\n if you want to insert more student at last enter 3 ");
    int k;
scanf("%d",&k);
if(k==1)
   {int q;
    printf("%s","enter the position to be insert in");
    scanf("%d",&q);
    insert(q);
   }

else if (k==2)
    insert(0);
else if(k==3)
   insert(p);

   printf("%s","if you want to insert more student enter 1 if not enter 0");
   int u;
scanf("%d",&u);
if(u==1)
   {goto end;}
}

    //use linked list
    else if (type==2)
    {
     struct student_data s1;
            begin:
            printf("Entering the student data \n");

            printf("Enter ID: ");
            scanf("%d", &s1.student_ID);

            printf("Enter name: ");
            scanf("%s", s1.student_name);

            printf("Enter Birth day: ");
            scanf("%d", &s1.student_birth_day);

            printf("Enter Birth month: ");
            scanf("%d", &s1.student_birth_month);

            printf("Enter Birth year: ");
            scanf("%d", &s1.student_birth_year);

            printf("Enter score: ");
            scanf("%d", &s1.student_lastyear_score);

            int choice;
            printf("To insert at First press 1 \n");
            printf("To insert at End press 2 \n");
            printf("To insert at at any position press 3 \n");

            scanf("%d", &choice);

            if (choice==1)
            insertAtFirst(s1);

            else if (choice==2)
            insertAtEnd(s1);

            else if (choice==3)
            { int pos;
            printf("Enter position");
            scanf("%d", &pos);
            insertAtPosition(pos,s1);}

            else
            printf(" ERORR \n");

            int flag;
            printf("To enter another student data press 1 \n");
            printf("To print your linked list press 2 \n");
            printf("To exit press 3 \n");
            scanf("%d", &flag);

            if (flag==1)
            goto begin;

            else if (flag==2)
            printLinkedlist();

            else if (flag==3)
            return 0;


            else
            printf(" ERORR \n");

    return 0;

    }

     // invalid input
    else{
        printf("invalid input!\n");
        goto first;
        }
    return 0;
}

