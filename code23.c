#include <stdio.h>
//Pointer Arithematic in C
//Following opertion can be perform on a pointer
//Addition of a no to the pointer
//Subtraction of a no to the pointer
//Subtraction of one pointer from another
//Comparison of two pointer variables

int main(){
int i=20;
int *j = &i;
printf("The address of if i is %u\n", j);
j++;  //j=j +1;
//j--;   //j=j-1;
printf("The address of if i is %u", j);

    return 0;
}