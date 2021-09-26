#include <stdio.h>
//Arrays in C
//Accepting the value from User using for loops
int main()
{
    int marks[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the marks for student  %d \n", i + 1);
        scanf("%d", &marks[i]);
    }

    //Printing the value /Marks of students

    for (int i = 0; i < 6; i++)
    {
        printf("The the marks for student %d is %d\n", i + 1, marks[i]);
    }

    return 0;
}