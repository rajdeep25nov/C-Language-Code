# include <stdio.h>
//Two more functiions in c
//Fgetc and Fputc.

int main (){
    FILE *ptr;
    ptr = fopen("code44.txt" , "r");
   // char c = fgetc(ptr);
    printf("The value of the char is %c",fgetc(ptr));
    printf(" %c",fgetc(ptr));
    printf(" %c",fgetc(ptr));
    printf(" %c",fgetc(ptr));
    printf(" %c",fgetc(ptr));
    printf(" %c",fgetc(ptr));
    printf(" %c",fgetc(ptr));
    printf(" %c",fgetc(ptr));

    return 0;
}