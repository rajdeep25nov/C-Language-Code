# include <stdio.h>
//Call by value     --->sending the values of arguemnts
//Call by Refrence  ---> sending the address of the arguments

//call by value
int sum(int r ,int k);

int main(){
    //call by value
int r = 20, k = 25;
printf("sum  of r and k is %d\n",sum(r,k));

    return 0;
}
//call by value 
int sum(int r, int k){
    return r+k;
}