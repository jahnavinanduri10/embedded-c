#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[20];
    char line[200];

    printf("Enter file name: ");
    scanf("%s", filename);

     fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    int n;
    
    printf("Enter number of new lines: ");
    scanf("%d", &n);
    getchar();

    for(int i = 0;i < n;i++)
    {
        printf("Enter line %d: ",i+1);
        fgets(line,200,stdin);
        fputs(line,fp);
    }

    fclose(fp);
    printf("Added successfully");
}