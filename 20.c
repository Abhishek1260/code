#include <stdio.h>

int main()
{

    FILE *spfile;
    spfile = fopen("20.txt", "r");
    char c;
    c = getc(spfile);
    printf("%c", c);

    return 0;
}