/*	Take several lines from the user and write all of them into a file.
Input: File name: lines.txt
Number of lines: 3
Lines: Line one, Line two, Line three
Output: All lines saved in 'lines.txt'.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[20];
    char line[200];

    printf("Enter file name: ");
    scanf("%s", filename);

     fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Enter line %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fputs(line, fp);
    }

    fclose(fp);

    printf("All lines saved in %s",filename);
}