#include <stdio.h>
// loops in c
int main()
{
    //   while loop
    int raj = 1;

    while (raj <= 10)
    {
        printf("%d\n", raj*3);
        raj++;
    }

printf("\nTable of 2\n");

//for loop
    for (int i = 1; i <= 10; i++)
    {
       printf("%d\n",i*2);

    }
    //do while loop
    int j;
   do
   {
       
       printf("Do while loop run once");
   } while (j<1000);
   
    return 0;
}