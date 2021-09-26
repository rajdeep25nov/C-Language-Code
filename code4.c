#include <stdio.h>
int main(){
   printf("Enter your age : ");
   int age;
   scanf("%d" , &age);
   if (age < 18)
   {
    printf("you cannot Drive");


   }
   else if (age>=18 && age <=24 )
   {
       printf("You are banned from driving");
   }
   else{
       printf("You can drive but carefully");
   }
   
   
   
   
    return 0;
}