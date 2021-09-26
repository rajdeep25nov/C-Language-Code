#include <stdio.h>

int main()
{

    //   data type
    //variable is a dabba
    // int ,float , char
    int a = 4;
    long integer1 = 8;
    short integer2 = 8;
    // unsigned short integer = 2;
    // unsigned int integer = 1;

    float b = 22.7;                  //6 decimal place
    double float1 = 34.55;           // 15 decimal
    long double float2 = 2.33333333; //19 decimal places
    char c = 'r';
    printf("hello %f", b);
    printf("The size taken by int is  %d\n", sizeof(int));
    printf("The size taken by is fCloat %d\n", sizeof(float));
    printf("The size taken by is char %d\n", sizeof(char));
    printf("The size taken by is unsigned int %d\n", sizeof(unsigned int));
    printf("The size taken by is double %d\n", sizeof(double));
    printf("The size taken by is short int %d\n", sizeof(short int));
    printf("The size taken by is long double %d\n", sizeof(long double));
    //Variables
    //not start with integer
    //rajdeepName camel
    int nameRajdeep;   // variable declaration
    nameRajdeep = 500; //double line
    int nameRaj = 23;
    const int i = 22;
    printf("%d \n", nameRajdeep);
    /*
            Types off operator in c
total 6 types of operators
        1 Arithematic operators
        1 Realational  operators
        2 Logical operators
        3 Bitwise operators
        4 Assignment operator
        5 Misc operators
        6 

*/

    //Arithematic Operators
    int x = 12, y = 20, z = 50;
    printf("The sum of x , y and z is %d \n", x + y + z);
    printf("The multiplication of x , y and z is %d \n", x * y * z);
    printf("The sub of y from z is %d \n", z - y);
    printf("The increament of x  %d \n", ++x);
    printf("The decreament  of x  %d \n", --x);

    // Realtional Operators
    int raj = 9, kam = 45;
    printf("%d\n", raj == kam); 
    printf("%d\n", raj != kam);
    printf("%d\n", raj < kam);
    printf("%d\n", raj > kam);

    // Logical operators
    int h = 0, j = 1;
    printf("The logical operators returns %d\n", h && j);
    printf("The logical operators returns %d\n", h || j);
    printf("The logical operators returns %d\n", !j);
    printf("The logical operators returns %d\n", !j);

    // Bitwise operators
    //q = 60,w =13
    int q = 60, w = 13; //just for explamnation
    q = 00111100;
    w = 00001101;
    printf("The bitwise and operators  returned %d\n", q & w);
    printf("The bitwise  or operators  returned %d\n", q | w);
    printf("The bitwise  xor operators  returned %d\n", q ^ w);
    printf("The bitwise once compliment operators  returned %d\n", ~w);
    printf("The bitwise right shift operators  returned %d\n", q >> w);
    printf("The bitwise left shift operators  returned %d\n", q << w);

    // Assignment operators
    // =, +=, *=, %=, etc
    int R = 9;
    R += 9;
    printf("%d\n", R);

    // Misc operator

    return 0;
}