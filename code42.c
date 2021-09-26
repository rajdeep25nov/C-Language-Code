# include <stdio.h>
//Reading the integer from the text file
int main(){
FILE *ptr;
int numb;
int i;
ptr =fopen("code42.txt","r");
fscanf(ptr, "%d", &numb);
fscanf(ptr, "%d", &i);
printf ("The value of num is %d\n",numb);
printf ("The value of i is %d\n",i);


//Closing the file is Important
//Bcoz it will tell compiler that work done with this file and associated resources could be freed
fclose(ptr);  
    return 0;
}