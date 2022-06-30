#include <stdio.h>

int main()
{

    FILE *spfile;
    spfile = fopen("22.txt", "r");

    while (!feof(spfile))
    {
        char ch = getc(spfile);
        printf("%c", ch);
    }

    return 0;
}