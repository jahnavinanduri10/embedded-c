#include <stdio.h>

int main()
{
    FILE *fp1;
    char filename[20];
    char lines[100];
    char *arr[100];
    char ch;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp1 = fopen(filename, "r");
    if (fp1 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    int count_lines = 0;

    while(fgets(lines,100,fp1) != NULL)
    {
        arr[count_lines++] = malloc(strlen(lines)+1);
        strcpy(arr[count_lines],lines);
    }

    fclose(fp1);

    for(int i = count_lines-1;i >= 0;i--)
    {
        printf("%s\n",arr[i]);
        free(arr[i]);
    }


}