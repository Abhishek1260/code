#include <stdio.h>

int main()
{

    FILE *spfile;
    spfile = fopen("18.txt", "w");
    int i = 0;
    for (i = 0; i < 100; i++)
    {
        fprintf(spfile, "%d\n", i);
    }
}