#include <stdio.h>

int main()
{
    FILE *spfile;
    spfile = fopen("21.txt", "w");
    char ch = '2';
    putc(ch, spfile);
    return 0;
}