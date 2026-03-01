#include <stdio.h>

int main()
{
    FILE *fp1,*fp2;
    char filename[20];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp1 = fopen(filename, "r");
    if (fp1 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fp2 = fopen("output.txt", "w");
    if (fp2 == NULL) {
        printf("Error: Cannot create target file.\n");
        fclose(fp1);
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp1)) != EOF) {
        ch = toupper(ch);
        fputc(ch, fp2);
    }

      printf("File successfully converted to uppercase.\n");
      fclose(fp1);
    fclose(fp2);
}
