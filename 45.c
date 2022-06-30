#include <stdio.h>

int main()
{

    int n, i;
    int arr[100];
    scanf("%d", &n);

    int *ptr = arr;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}