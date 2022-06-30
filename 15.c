#include <stdio.h>

struct employee
{
    char name[20];
    char address[100];
    int age;
    float salary;
};

int main()
{
    struct employee s[1000];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %d %f", &s[i].name, &s[i].address, &s[i].age, &s[i].salary);
    }
    float average = 0, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += s[i].salary;
    }
    average = sum / (float)(n);

    printf("%.2f", average);

    return 0;
}