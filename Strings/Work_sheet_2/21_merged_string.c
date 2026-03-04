#include <string.h>
#include <stdio.h>

void interleaving_two_strings(char *s1,char *s2,char *s3)
{
    int len1 = strlen(s1),len2 = strlen(s2), len3 = strlen(s3);
    if(len1+len2 != len3)
    {
        printf("False");
        return;
    }

    char res[100];
    int i = 0,j = 0,k = 0;
    while(i < len1)
        res[k++] = s1[i++];
    while(j < len2)
        res[k++] = s2[j++];
    res[k] = '\0';
    
    if(strstr(res,s3))
        printf("True");
    else
        printf("False");
}
int main()
{
    char s1[100],s2[100],s3[100];

    printf("Enter string1: ");
    scanf("%[^\n]",s1);
    printf("Enter string2: ");
    scanf(" %[^\n]",s2);
    printf("Enter string3: ");
    scanf(" %[^\n]",s3);

    interleaving_two_strings(s1,s2,s3);
}