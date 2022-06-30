#include <stdio.h>

int add(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int n, i;
    int arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", add(arr, n));
    return 0;
}