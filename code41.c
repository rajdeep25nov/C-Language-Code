#include <stdio.h>
//File I/O
//Mode ---> Read or Write at low level
/*
       <---------Modes are of following in C----------->
    "r" ----> Open for reading
    "rb" ---->Open for reading in binary
    "w" ---->Open for wrting
    "wb" ---->Open for wrting in binary
    "a" ---->open for append (Adding content at the end of the content of file is known as append).


    <----------Types of Files-------------->
    Two Types of files...
    1.---->Text file (.txt , .c)
    2.---->Binary Files (.jpg , .dat)

*/

int main()
{
    FILE *ptr;
    // ptr = fopen("code41.txt","r"); //---->For reading
    ptr = fopen("code41.txt", "w"); //---->For Writing

    return 0;
}