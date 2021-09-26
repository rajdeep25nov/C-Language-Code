# include <stdio.h>
//Writing with files


int main(){
FILE *ptr;
int num = 50;
ptr =fopen("code43.txt","w");
fprintf(ptr ,"The number in the file is %d\n",num);
fprintf(ptr,"Thankyou for using\n");
fclose(ptr);



    return 0;
}