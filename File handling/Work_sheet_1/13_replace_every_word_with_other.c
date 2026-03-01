#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp, *temp;
    char filename[50];
    char oldWord[50], newWord[50];
    char word[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    printf("Enter word to replace: ");
    scanf("%s", oldWord);

    printf("Enter replacement word: ");
    scanf("%s", newWord);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Error creating temp file\n");
        fclose(fp);
        return 1;
    }

    while (fscanf(fp, "%s", word) != EOF) {
        if (strcmp(word, oldWord) == 0) {
            fprintf(temp, "%s ", newWord);
        } else {
            fprintf(temp, "%s ", word);
        }
    }

    fclose(fp);
    fclose(temp);

     remove(filename);
    rename("temp.txt", filename);

    printf("Word replaced successfully.\n");
}