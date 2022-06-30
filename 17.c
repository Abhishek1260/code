#include <stdio.h>

struct name
{
    char fname[20];
    char lname[20];
};

struct date
{
    int day;
    int month;
    int year;
};

struct employee
{
    float salary;
    struct name Name;
    struct date Date;
};

int main()
{
    struct employee e1;
    scanf("%s %s %d %d %d %f", &e1.Name.fname, &e1.Name.lname, &e1.Date.day, &e1.Date.month, &e1.Date.year, &e1.salary);
    printf("%s %s %d:%d:%d %.2f", e1.Name.fname, e1.Name.lname, e1.Date.day, e1.Date.month, e1.Date.year, e1.salary);
    return 0;
}