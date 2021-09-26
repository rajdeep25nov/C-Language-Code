#include <stdio.h>
# include <string.h>
/*strcpy This fucntion is used to copy the content 
 of second string into first string */


int main()
{
    char *r= "Rajjo";
    char rr[45];
    strcpy(rr,r);
    printf("The value of rr is now %s",rr);
    return 0;
}