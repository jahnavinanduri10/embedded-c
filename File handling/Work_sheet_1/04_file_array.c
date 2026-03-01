#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[20];
    char array[50][50];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    int count = 0;
    while((fgets(array[count],50,fp)) != NULL)
    {
        count++;
    }

    fclose(fp);
    for(int i = 0;i < count;i++)
    printf("%s\n",array[i]);
}