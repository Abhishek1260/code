#include <stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main()
{

    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int min = MIN(num1, num2);
    printf("%d", min);
    return 0;
}