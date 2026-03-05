#include <stdio.h>

int main()
{
    FILE *fp1,*fp2,*fp3;
    char source[20],dest[20];

    printf("Enter source file: ");
    scanf("%s", source);

    printf("Enter dest file: ");
    scanf("%s", dest);


    fp1 = fopen(source, "r");
    if (fp1 == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    fp2 = fopen(dest, "r");
    if (fp2 == NULL) {
        printf("Error opening destination file!\n");
        return 1;
    }

    fp3 = fopen(dest, "w");
    if (fp3 == NULL) {
        printf("Error opening destination file!\n");
        return 1;
    }

    char buff[100];
    char ch1,ch2;

    while(((ch1 = fgetc(fp1)) != EOF) && ((ch2 = fgetc(fp2)) != EOF))
    {
        if(ch1 != EOF)
        {
            fgets(buff,200,fp1);
            fputs(buff,fp3);
        }
        else if(ch2 != '\n')
        {
            fgets(buff,200,fp2);
            fputs(buff,fp3);
        }
    }

    rewind(fp3);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}