#include <stdio.h>

struct Result
{
    int vagfol;
    int vagshesh;
};

struct Result divide(int x, int y)
{
    struct Result result;
    result.vagfol = x / y;
    result.vagshesh = x % y;

    return result;
};

int main()
{
    int a = 10, b = 3;
    struct Result result = divide(a, b);
    printf("%d %d\n", result.vagfol, result.vagshesh);
}