#include <stdio.h>
#include <stdlib.h>
//malloc Example
int main()
{
printf("The size of intt in my pc is %d\n",sizeof(int));
    int *ptr;
    //  ptr = malloc(6  * 4); //Not a goood practice coz in some other architechture it size of int varies
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of element %d\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d is %d :\n",i+1,ptr[i]);
    }
    
    return 0;
}