#include <stdio.h>
int glo = 76;
// function in c
//syntax for funtion 
//data type + function name  (parameter type and name ){}
// function 1
void newPrint(char * char1)
{
    printf(" the value is %s\n",char1);
}

// function 2
float sum1(float a,float b){
return (a+b)/2;
}
int main   (){
newPrint("Rajdeep");
newPrint("Jaiswal");
printf("%f",sum1(100,299));
printf("\n%d",glo);
    return 0;
}