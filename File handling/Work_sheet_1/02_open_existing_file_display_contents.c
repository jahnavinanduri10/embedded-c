#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt","r");
    if (fp == NULL) {
    printf("File not found\n");
    return 1;
    }

    char str[100];
    //fscanf(fp,"%s",str);
    fgets(str,50,fp);
    printf("%s",str);
}