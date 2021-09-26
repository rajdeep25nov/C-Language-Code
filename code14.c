#include <stdio.h>
//Pointer in C
/*
int * ptr ;---> Pointers to Integers
char * ptr; ---> Pointers to character
float * ptr; ---> Pointers to float
*/
int main(){
    int i= 20;
    int *j =&i;//J will store the address if i
  
printf("The value of i is %d\n",i);
printf("The value of i is %d\n",*j);
//Printring the address of i
printf("The address of i is %u\n",&i);
printf("The address of i is %u\n",j);
//Address of J
printf("The address of j is %u\n",&j);
printf("The value of j is %u\n",*(&j));

int **k;
k=&j;
printf("The value of k is %d\n",k);
printf("The address of k is %u\n",(&k));


    return 0;
}