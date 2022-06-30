#include <stdio.h>
#include <stdlib.h>

struct students
{
    int rollNo;
    int marks;
};

int main()
{

    struct students *ptr;

    int n;

    scanf("%d", &n);

    ptr = (struct students *)malloc(n * sizeof(struct students));

    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &(ptr + i)->rollNo, &(ptr + i)->marks);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d %d\n", (ptr + i)->rollNo, (ptr + i)->marks);
    }
    return 0;
}