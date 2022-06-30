#include <stdio.h>

int main()
{

    int num = 45;

    int const *ptr = &num;

    num = 50;
    printf("%d", num);

    // *ptr = 60;
    // printf("%d", num);

    return 0;
}