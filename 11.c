#include <stdio.h>

struct student
{
    int id;
    int marks;
};

int main()
{
    struct student s1, s2;
    s1.id = 10;
    s1.marks = 200;
    s2.id = 20;
    s2.marks = 40;
    printf("%d %d", s1.id, s2.id);
    printf("%d %d", s1.marks, s2.marks);
    return 0;
}