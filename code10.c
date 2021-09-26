#  include <stdio.h>
# include <string.h>

struct books

{
    char name[20];
    char author [20];
     int price;
}book;

void printstruct(struct books b1)
{
    printf("%s\n",b1.author);
    printf("%s\n",b1.name);
    printf("%d\n",b1.price);
}

int main (){

    // structures allows us to make different types of data types

struct books b1;
strcpy (b1.author ,"rajdeep");
strcpy(b1.name , "C programming");
b1.price = 500;

printstruct(b1);

    return 0;
}