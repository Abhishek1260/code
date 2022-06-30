#include <stdio.h>

int main()
{

    FILE *spfile;
    spfile = fopen("19.txt", "r");
    int i;
    fscanf(spfile, "%d", &i);
    printf("%d", i);
    return 0;
}