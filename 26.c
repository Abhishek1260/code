#include <stdio.h>

int add(int arr[], int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int n, i;
    scanf("%d", &n);
    int arr[1000];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the sum of the elements is : %d", add(arr, n));

    return 0;
}