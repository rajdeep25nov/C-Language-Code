#include <stdio.h>
#include <string.h>
/*
    Structures --->Custome DataTypes --->Combination of Dissimilar Datatypes
    Collection of different types of variable in single entity
    Syntax  --
struct students {
int roll_no;
float marks;
int uid;
char name[20];
};

. ---> is a member operator ---->dot operator

*/
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
    s1.roll_no = 20;
    s1.uid = 20761;
    s1.marks = 10.10;
    strcpy(s1.name, "Rajdeep");
    printf("Name is %s\nUid is %d\nMarks is %f\nRollno is %d\n", s1.name, s1.uid, s1.marks, s1.roll_no);
    return 0;
}