#include <stdio.h>
#include <string.h>

int main()
{
    char ar[100];
    scanf("%s", &ar);
    int counter[26] = {0};
    for (int i = 0; i < strlen(ar); i++)
    {
        char value = ar[i];
        counter[value - 'a']++;
    }
    for (char value = 'a'; value <= 'z'; value++)
    {
        if (counter[value - 'a'] > 0)
        {
            printf("value-> %c count-> %d\n", value, counter[value - 'a']);
        }
    }

    return 0;
}