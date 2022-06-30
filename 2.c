#include <stdio.h>

void add(int arr[], int n)
{
    int sum, i;
    for (i = 0; i < n; i++)
    {
        arr[i] += 5;
    }
}

int main()
{

    int n, i;
    int arr[10001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    add(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}