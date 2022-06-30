#include <stdio.h>

int main()
{

    FILE *spfile;
    spfile = fopen("23.txt", "w");
    fputs("Hello world", spfile);
    fseek(spfile, 6, SEEK_SET);
    fputs("INDIA", spfile);
    fseek(spfile, 6, SEEK_SET);

    printf("The pointer is at : %d", ftell(spfile));

    return 0;
}