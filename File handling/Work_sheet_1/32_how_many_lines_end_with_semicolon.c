
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1024

int main()
{
    FILE *fp;
    char filename[100], line[MAX];
    int count = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(line, MAX, fp))
    {
        int len = strlen(line) - 1;

        while (len >= 0 && (line[len] == '\n' || isspace(line[len])))
            len--;

        if (len >= 0 && line[len] == ';')
            count++;
    }

    fclose(fp);

    printf("Number of lines ending with semicolon: %d\n", count);

    return 0;
}