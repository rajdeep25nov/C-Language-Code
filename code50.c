#include <stdio.h>
#include <stdlib.h>
//Asking the user that how much integer do you want
int main()
{
    int *ptr;
    int n;

    printf("How many Integers do you want to enter \n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d \n", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i]);
    }

    return 0;
}