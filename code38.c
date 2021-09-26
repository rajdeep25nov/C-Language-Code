#include <stdio.h>
#include <string.h>
//Pointer to structures😊(●'◡'●)

struct students
{
    int roll_no;
    float marks;
    int uid;
    char name[20];
};
int main()
{
    struct students r1;
    struct students *ptr; //point struct type students variable
    ptr = &r1;
    // (*ptr).roll_no = 20;
    ptr->roll_no = 20; //arrow operator
    printf("The roll no is %d\n ", r1.roll_no);

    return 0;
}