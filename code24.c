#include <stdio.h>
//Accessig arrays using pointers in C
int main()
{
    int marks[5];    //creating array
    int *ptr;        //creating pointer
    ptr = &marks[0]; //pointing the ptr to first element of array
   
   for (int i = 0; i < 4; i++)
   {
       printf("Enter the value of %d student:  \n",i+1);
       scanf("%d",ptr);
       ptr++;
   }
   
   for (int i = 0; i < 4; i++)
   {
       printf("You enetr the marks of studen %d is %d :\n",i+1 , marks[i]);
       
   }
    return 0;
}