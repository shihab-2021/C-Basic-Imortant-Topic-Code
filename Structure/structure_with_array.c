#include <stdio.h>

// int *makeAnArray(int n)
// {
//     int *out = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         out[i] = i + 1;
//     }
//     return out;
// }

struct ArrayHolder
{
    int array[100];
};

struct ArrayHolder makeAnArray(int n)
{
    struct ArrayHolder ans;
    for (int i = 0; i < n; i++)
    {
        ans.array[i] = i + 1;
    }
    return ans;
}

int main()
{
    int n = 10;
    struct ArrayHolder ans = makeAnArray(n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans.array[i]);
    }
}