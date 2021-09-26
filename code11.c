#include <stdio.h>
/*
    some time our program get biggert in size and its not [possible] for a programmer to track
    which piece of code is doing what,
    Function is a  ways to break our code into chunks so that it is possible for a programmer to 
    reuse them.
    Function is a block of code which performs a prticular tasks.
    Function prototype-->
    void display();
    function definition -->
    void display(){

        printf("Hi i am Rajdeep");
    }
    */

void display(); //Function prototype

void goodMorning();
void goodAfternoon();
void goodEvening();
void goodNight();

int sum(int a , int b);

int main()
{
    int a;
    printf(" function starts\n");
    display(); // Function call
    goodMorning();
    goodAfternoon();
    goodEvening();
    goodNight();
    printf(" fucntion ends\n");
 int result = sum(10,20);
 printf("The sum of both no is %d", result);

 //change
 int b =555;
 printf("The valur of b is before change %d\n",b);
  change(b);
 printf("The valur of b is after change %d\n",b);

 
    return 0;
}
void display()
{ //function definition
    printf("Hii, my name is Rajdeep\n");
}
void goodMorning()
{
    printf("Hii, Rajdeep GoodMorning\n");
}
void goodAfternoon()
{
    printf("Hii, Rajdeep GoodAfternoon\n");
}
void goodEvening()
{
    printf("Hii, Rajdeep GoodEvening\n");
}
void goodNight()
{
    printf("Hii, Rajdeep GoodNight\n");
}
int sum(int a,int b){
    int result;
    result =a+b;
    return result;
}
void change(int a);
void change(int a){
    a=88;
}
/*

two type of function 
Library Funtion eg printf
User defined function like we made goodmrng goodafternoon etc....
Why use functopn??
To avoid rewritng same code.
to test and check logic independently
Parameterisd functions 
*/