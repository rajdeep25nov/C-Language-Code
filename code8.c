# include <stdio.h>
int main(){

int a = 20;
int* ptr;
ptr = &a;
*ptr = 188;
printf("%d", a);
    return 0;
}