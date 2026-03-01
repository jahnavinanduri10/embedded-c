#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    printf("Enter string1: ");
    scanf("%[^\n]",str1);
    printf("Enter string2: ");
    scanf(" %[^\n]",str2);

    strcat(str1,str2);
    strncpy(str2,str1,strlen(str1)-strlen(str2));
    str2[strlen(str1)-strlen(str2)] = '\0';
    strcpy(str1,str1+strlen(str2));

    printf("%s %s",str1,str2);
}