#include <stdio.h>

int main() 
{
    FILE *fp;
    char filename[50];
    char ch;
    int words = 0,characters = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;
        if(!(isspace(ch)))
            words++;
    }
