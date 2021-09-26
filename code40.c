#include <stdio.h>
#include <string.h>
//Type def used to just create  a custom data type
//Alias Name

typedef struct students
{
    int roll_no;
    float marks;
    int uid;
    char name[20];
}raj; //creating raj a custom data type
int main()
{

    raj r1;
    raj *ptr;


    ptr = &r1;
    ptr->roll_no = 20; 
    ptr->marks =20.2;

    printf("The roll no is %d\n ", r1.roll_no);
    printf("The marks is %f\n ",r1.marks); 

    return 0;
}