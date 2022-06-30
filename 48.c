#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    int n;
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}