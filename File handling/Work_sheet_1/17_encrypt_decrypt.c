#include<stdio.h>
#define  KEY 0x11

/*
encrypt
char ch;
FILE *fp = ("file.txt","r+");
while((ch=fgetc(fp)) != EOF)
{
ch = ch ^ KEY;
fputc(ch,fp);
}

decrypt
FILE *fp = ("file.txt","r+");
while((ch=fgetc(fp)) != EOF)
{
ch = ch ^ KEY;
fputc(ch,fp);
}

*/