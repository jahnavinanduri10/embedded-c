#include <stdio.h>

int main()
{
    FILE *fp1,*fp2;
    char source[20],dest[20];
    char line[200];

    printf("Enter source file: ");
    scanf("%s", source);

    printf("Enter dest file: ");
    scanf("%s", dest);


     fp1 = fopen(source, "r");
    if (fp1 == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    fp2 = fopen(dest, "w");
    if (fp2 == NULL) {
        printf("Error opening destination file!\n");
        return 1;
    }
    char buff[100];
    while(fgets(buff,100,fp1) != NULL)
    {
        fputs(buff,fp2);
    }

    fclose(fp1);
    fclose(fp2);
}
