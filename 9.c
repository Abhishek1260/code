#include <stdio.h>

int main()
{

    int arr[10], i, n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("a[%d] : %d\n", i, *(arr + i));
    }

    return 0;
}