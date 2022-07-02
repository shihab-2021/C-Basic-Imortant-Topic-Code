#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    struct Student a = {"Ali", 1, 90};
    struct Student b = {.name = "rakib", .marks = 89, .roll = 2};
    strcpy(b.name, "Rakib");
    printf("Name: %s\nRoll: %d\nMarks: %d\n\n", a.name, a.roll, a.marks);
    printf("Name: %s\nRoll: %d\nMarks: %d\n\n", b.name, b.roll, b.marks);
    return 0;
}
