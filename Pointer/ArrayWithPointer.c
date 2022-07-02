#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    printf("%p %p\n", a, &a[0]);
    printf("%d\n", *a);
    printf("%d %d %d %d %d\n", *a, *(a + 1), *(a + 2), *(a + 3), *(a + 4));

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(a + i));
    }
    printf("\n");

    int *ptr = a;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr));
        ptr++;
    }
    printf("\n");

    return 0;
}