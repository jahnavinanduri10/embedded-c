#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024

int main()
{
    FILE *fp, *temp;
    char filename[100], buffer[MAX], newLine[MAX];
    int lineNo, currentLine = 1;

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();  

    printf("Enter line number to modify: ");
    scanf("%d", &lineNo);
    getchar();

    printf("Enter new text: ");
    fgets(newLine, MAX, stdin);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL)
    {
        printf("Error creating temporary file\n");
        fclose(fp);
        return 1;
    }

    while (fgets(buffer, MAX, fp))
    {
        if (currentLine == lineNo)
            fputs(newLine, temp);
        else
            fputs(buffer, temp);

        currentLine++;
    }

    fclose(fp);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("Line %d updated successfully.\n", lineNo);

    return 0;
}