/*	Make a new file and save some text entered by the user.
Input: File name: test.txt
Text: Hello, this is my first file!
Output: File 'test.txt' created and saved.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt","w");
    if (fp == NULL) {
    printf("File not found\n");
    return 1;
    }

    fprintf(fp,"Hello,this is my first file!");
    fclose(fp);

    printf("File 'test.txt' created and saved");
}