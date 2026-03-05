#include <stdio.h>

int main(char* argv,int argc)
{
    FILE *fp = fopen("file.txt","w");
    int sum = 0;
    for(int i = 0;i < argc;i++)
    sum += argv[i];

    fprintf(fp,"%d",sum);
    fclose(fp);
}