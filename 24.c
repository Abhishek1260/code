#include <stdio.h>

int add(int arr[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        arr[i] += 5;
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    add(arr);

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}