#include <stdio.h>
#include <string.h>

struct employee
{
    char name[100];
    char address[100];
    float salary;
};

int main()
{

    struct employee s[5], temp;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        scanf("%s %s %f", &s[i].name, &s[i].address, &s[i].salary);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("name : %s address : %s salary : %.2f", s[i].name, s[i].address, s[i].salary);
    }
}