#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[20];
    char line[200];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int n;

    fscanf(fp,"%d",&n);
    printf("Read variable: %d;",n);
    fclose(fp);
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    int n1 = 100;
    fprintf(fp,"%d",n1);
    printf("After writing: %d",n1);
    fclose(fp);
}   