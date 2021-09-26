#include <stdio.h>
#include <string.h>
//Passing structure to a fucntion😊

struct students
{
    int roll_no;
    
};

void show(struct students stud)
{
    printf("The roll no is %d\n ", stud.roll_no);
}

int main()
{
    struct students r1;
    struct students *ptr;
    ptr = &r1;
    (*ptr).roll_no = 20;
    show(r1);

    return 0;
}
