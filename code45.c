# include <stdio.h>
int main(){
 FILE *ptr;
 ptr = fopen("code45.txt", "w");
 putc('r',ptr);
 putc('a',ptr);
 putc('j',ptr);
 putc('d',ptr);
 putc('e',ptr);
 putc('e',ptr);
 putc('p',ptr);

    return 0;
}