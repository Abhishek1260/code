#include <stdio.h>

int main()
{

    int num1 = 50, num2 = 60;

    int *const ptr = &num1;

    printf("%d", *ptr);

    return 0;
}