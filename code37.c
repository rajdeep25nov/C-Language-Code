#include <stdio.h>
#include <string.h>
//By making Arrays
//Structure stored in contiguous memory/ram location

struct students
{
    int roll_no;
    float marks;
    int uid;
    char name[20];
};
int main()
{
    struct students school1[50]; //school2[50], school3[70];
    school1[0].marks = 22.22;
    school1[0].roll_no = 22;
    school1[0].uid = 500;
    strcpy(school1[0].name, "Rajdeep");
    printf("Name is %s\nUid is %d\nMarks is %f\nRollno is %d\n", school1[0].name, school1[0].uid, school1[0].marks, school1[0].roll_no);

    return 0;
}