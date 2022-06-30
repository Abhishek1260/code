#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *spfile;

    spfile = fopen("51.txt", "wb");

    int n;
    scanf("%d", &n);

    int *ptr;
    int *ptr3;

    ptr = (int *)malloc(n * sizeof(int));
    ptr3 = (int *)malloc(n * sizeof(int));

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    void *ptr2 = ptr;

    fwrite(ptr, sizeof(int), n, spfile);
    fclose(spfile);

    spfile = fopen("51.txt", "rb");
    fread(ptr3, sizeof(int), n, spfile);

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr3 + i));
    }

    return 0;
}