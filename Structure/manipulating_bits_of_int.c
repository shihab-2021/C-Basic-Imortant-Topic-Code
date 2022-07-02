#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *strrev(char *str)
{
    if (!str || !*str)
        return str;

    int i = strlen(str) - 1, j = 0;
    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

struct Binary
{
    char str[50];
};

struct Binary toBinary(unsigned int val, int k)
{
    struct Binary ans;
    int idx = 0;
    while (val > 0)
    {
        int d = val % 2;
        val = val / 2;
        ans.str[idx] = '0' + d;
        idx++;
    }
    for (int i = idx; i < k; i++)
        ans.str[i] = '0';

    ans.str[k] = 0;
    strrev(ans.str);
    return ans;
}

bool getBit(unsigned int mask, int k)
{
    return (mask & (1 << k)) != 0;
}

unsigned int setBit(unsigned int mask, int k)
{
    return mask | (1 << k);
}

unsigned int clearBit(unsigned int mask, int k)
{
    return mask & ~(1 << k);
}

unsigned int flipBit(unsigned int mask, int k)
{
    return mask ^ (1 << k);
}

int main()
{
    int x = 2;
    printf("%d = %s\n", x, toBinary(x, 8).str);

    for (int i = 0; i < 8; i++)
    {
        printf("%d th bit: %d\n", i, getBit(x, i));
        printf("Clear: %s\n", toBinary(clearBit(x, i), x).str);
        printf("Set: %s\n", toBinary(setBit(x, i), x).str);
        printf("Flip: %s\n", toBinary(flipBit(x, i), x).str);
    }
}