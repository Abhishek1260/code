#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int *ptr;
    ptr = &a;

    int **ptr2 = &ptr;
    printf("%p\n", ptr2);
    printf("%p\n", &ptr);

    printf("%d\n", *ptr);

    return 0;
}