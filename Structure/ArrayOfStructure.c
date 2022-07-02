#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int roll;
    int marks;
};

void print_struct(struct Student a)
{
    printf("%s %d %d\n", a.name, a.roll, a.marks);
}

void fun(struct Student *st)
{
    st[0].marks = 100;
}

int main()
{
    struct Student a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d %d", &a[i].name, &a[i].roll, &a[i].marks);
    }
    fun(a);
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        print_struct(a[i]);
    }

    return 0;
}
