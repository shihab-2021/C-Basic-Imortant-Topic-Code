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
    (*st).marks = 100;
    print_struct(*st);
    st->marks = 99;
}

int main()
{
    struct Student a = {"Rakib", 21, 81};
    fun(&a);
    print_struct(a);
    return 0;
}
