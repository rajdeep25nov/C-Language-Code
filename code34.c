# include <stdio.h>
# include <string.h>
/*
strcat is used to concatinate two strings
*/


int main()
{
    char rr[45] = "Jaiswal";
    char *r= "Rajdeep";
    strcat(rr,r);
    printf("The value of rr is now %s",rr);
    return 0;
}