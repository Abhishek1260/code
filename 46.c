#include <stdio.h>

int main()
{

    int num = 10;

    void *ptr = &num;

    int *ptr2 = ptr;

    if (ptr2 == ptr)
    {
        printf("pointing to the same variable\n");
    }

    printf("%d", *ptr2);

    return 0;
}