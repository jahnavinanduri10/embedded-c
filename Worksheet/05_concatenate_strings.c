#include <stdio.h>
#include <string.h>

void str_cat(char str1[],int len1,char str2[],int len2,int i)
{
    if(len2 > 0)
    {
        str1[len1+i] = str2[i];
        str_cat(str1,len1,str2,len2-1,i+1);
    }
    else
        str1[len1+i] = '\0';
}

int main()
{
    char str1[100],str2[100];
    printf("Enter string1: ");
    scanf("%[^\n]",str1);
    printf("Enter string2: ");
    scanf(" %[^\n]",str2);
    
    str_cat(str1,strlen(str1),str2,strlen(str2),0);
    printf("After concatenation: %s\n",str1);
}