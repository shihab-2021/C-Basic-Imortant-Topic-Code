#include <stdio.h>

void change(int *ptr)
{
    *ptr = 20;
}

void arrChange(int *ptr)
{
    *(ptr + 2) = 10;
}

void multipleReturn(int *x, int *y)
{
    *x = 100;
    *y = 200;
}

int main()
{
    int a = 10;
    change(&a);
    printf("%d\n", a);

    int arr[3] = {1, 2, 3};
    arrChange(arr);
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);

    // return multiple value by pointer
    int x, y;
    multipleReturn(&x, &y);
    printf("%d %d\n", x, y);

    return 0;
}
