#include <stdio.h>
#include <string.h>
//Some libraries in c Strlen is used to count the string length
int main()
{

    char *r = "Rajdeep Jaiswal "; //It will not count null chararacter ,it'll exclude the null charracter
    int a = strlen(r);
    printf("The lenght of the string r is %d", a);
    return 0;
}

