# include <stdio.h>
//to read all the content in the file
int main (){
char c;
FILE *ptr;
ptr = fopen("code46.txt","r");
c = fgetc(ptr);
while (c!=EOF)
{
    printf("%c",c);
    c=fgetc(ptr);
}



    return 0 ;
}