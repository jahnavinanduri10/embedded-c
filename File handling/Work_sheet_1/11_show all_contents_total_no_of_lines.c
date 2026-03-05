#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int lines = 0;
    char filename[50];

    printf("Enter file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    printf("File contents:\n\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
        if (ch == '\n')
            lines++;
    }

    fclose(fp);

    printf("\n\nTotal number of lines: %d\n", lines);

    return 0;
}