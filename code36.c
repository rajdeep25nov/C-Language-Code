#include <stdio.h>
#include <string.h>
//Structure keep the data organised.
//Structure make the data management easy for the programmer

struct students
{
    int roll_no;
    float marks;
    int uid;
    char name[20];
};

int main()
{
    struct students s1;
    printf("Enter the value for Rollno. : ");
    scanf("%d",&s1.roll_no);
    printf("Enter the value for Marks : ");
    scanf("%f",&s1.marks);
    printf("Enter the value for Uid. : ");
    scanf("%d",&s1.uid);
    printf("Enter the value for Name : ");
    scanf("%s",&s1.name);
  printf("Name is %s\nUid is %d\nMarks is %f\nRollno is %d\n", s1.name, s1.uid, s1.marks, s1.roll_no);

    return 0;
}

