#include <stdio.h>

int make_sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int s = make_sum(10, 20);
    printf("%d\n", s);

    return 0;
}
