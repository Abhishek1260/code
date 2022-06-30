#include <stdio.h>

struct students
{
    char fname[20];
    char lname[20];
    int roll_no;
};

int main()
{

    struct students s[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        scanf("%s %s %d", &s[i].fname, &s[i].lname, &s[i].roll_no);
    }

    struct students temp;
    int j;

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (s[i].roll_no > s[j].roll_no)
            {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        };
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s %s", s[i].fname, s[i].lname);
    }

    return 0;
}