# include <stdio.h>
# include <string.h>
int main  (){


    // string in c
    char name [3]={'r','j','\0'};
    char str1[65];
    strcpy(str1,name);
    printf("%s", str1);

    return 0;
}