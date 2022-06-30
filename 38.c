#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{

    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("The max of the both of them is : %d", MAX(num1, num2));

    return 0;
}