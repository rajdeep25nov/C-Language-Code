#include <stdio.h>
// arrays in c
int main(){
 int arr[10] ;
// printf("\n %d",arr[0]);
// taking iput from user in array
for (int i = 0; i < 10; i++)
{
    printf("Enter the value for index %d\n", i);
    scanf("%d", &arr[i]);

}
for (int i = 0; i < 10; i++)
{
    printf("the value for index %d is  %d\n",  i ,arr[i]);
    

}


    return 0 ;
}