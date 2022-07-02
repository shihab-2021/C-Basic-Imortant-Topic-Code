#include <stdio.h>

int main()
{
    FILE *inputFile = fopen("logFile.txt", "r");
    FILE *logFile = fopen("log.txt", "a");
    if (inputFile == NULL)
    {
        fprintf(logFile, "Input not found!\n");
        return 0;
    }
    return 0;
}