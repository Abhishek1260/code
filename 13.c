#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int roll_no;
};

int main()
{

    struct student student1 = {
        "ABC",
        10};

    struct student student2;

    student2 = student1;

    printf("name : %s\n", student2.name);
    printf("roll number : %d\n", student2.roll_no);

    if (strcmp(student1.name, student2.name) == 0)
    {
        if (student1.roll_no == student2.roll_no)
        {
            printf("Both the structures are same");
        }
    }

    return 0;
}