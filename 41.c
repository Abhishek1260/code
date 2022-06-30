#include <stdio.h>

int main()
{

    int num = 45;
    int *ptr, **ptr2;

    ptr2 = &ptr;
    ptr = &num;

    printf("%d", num);

    scanf("%d", *ptr2);
    printf("%d", num);

    return 0;
}