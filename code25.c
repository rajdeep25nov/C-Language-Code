# include<stdio.h>
//Arrays to function in C
void printArray(int *ptr, int n){
    for (int  i = 0; i <n; i++)
    {
        printf("The value of element %d is %d \n",i+1, *(ptr+i) );
    }
}
int main(){
int arr[] = {4,2,3,77,57,64,7};
printArray(arr,7); //We have to pass the the exact size of array otherwise it will misbehave and pass a garbage value
    


    return 0;
}