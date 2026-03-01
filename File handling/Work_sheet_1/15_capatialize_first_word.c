#include <stdio.h>

int initial_capital(FILE *fp)
{
    char ch;

    ch = fgetc(fp);
    if(ch >= 'a' && ch <= 'z')
    {
        fseek(fp,-1,1);
        fputc(ch-32,fp);
    }

    while(ch != EOF)
    {
        
        ch = fgetc(fp);
        if(ch == ' ' || ch == '\n')
        {
            if(ch >= 'a' && ch <= 'z')
            {
                fseek(fp,-1,1);
                fputc(ch-32,fp);
            }
        }
    }
    return 1;
}

int main()
{
    FILE *fp1;
    char filename[20];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp1 = fopen(filename, "r+");
    if (fp1 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    if(initial_capital(fp1))
        printf("Success");
    else    printf("Failure");

    fclose(fp1);
}
