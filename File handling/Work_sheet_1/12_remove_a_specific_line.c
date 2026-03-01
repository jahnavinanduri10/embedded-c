#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fp, *temp;
    char filename[50];
    char buffer[200];
    int remove,line = 1;

    printf("Enter file name: ");
    scanf("%s", filename);

    printf("Enter line number to remove: ");
    scanf("%d", &remove);

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
    char buffer[100];
    while (fgets(buffer, 100, fp) != NULL) {
        if (line != remove) {
            fputs(buffer, temp);
        }
        line++;
}

fclose(fp);
fclose(temp);

}
