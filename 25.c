#include <stdio.h>

int add(int arr[][2])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            arr[i][j] += 5;
        }
    }
}

int main()
{

    int arr[2][2] = {{1, 2}, {3, 4}};

    add(arr);

    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}