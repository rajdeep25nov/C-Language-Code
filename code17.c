# include <stdio.h>
//call by refrence
void  swap(int *r, int*k);



int main(){
int r = 10 , k =20;
printf("The value r and k before swapping is %d and %d\n ",r,k);
swap(&r,&k);

printf("The value r and k after swapping is %d and %d\n ",r,k);
    return 0;

}
void swap(int *r, int *k){
    int temp;
    temp = *r;
    *r =*k;
    *k=temp;
}