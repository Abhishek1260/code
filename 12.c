#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{

    struct student student1;
    gets(student1.name);
    scanf("%d", &student1.marks);
    scanf("%d", &student1.roll);
    printf("name : %s", student1.name);
    printf("roll : %d", student1.roll);
    printf("marks : %d", student1.marks);
    return 0;
}