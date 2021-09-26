# include <stdio.h>
//Recursion in c
//A function defined in c can call itself .Is xcalled recursion
//A fucntion calling itself is also called recursive function.

 int factorial (int x);
int main (){
   int a = 3;
   printf("The value of factorial %d is %d",a , factorial(a));


    return 0;
}

 int factorial (int x){
     if (x==1 || x==0){
        return 1;
     }
     else{
     return x*  factorial(x-1);

     
 }
 }