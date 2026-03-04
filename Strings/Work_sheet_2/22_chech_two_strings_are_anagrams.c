#include <stdio.h>
#include <string.h>

int check_anagram(char *str1,char *str2)
{
    int count[256] = {0};

    if(strlen(str1) != strlen(str2))
        return 0;

    for(int i = 0;str1[i] != '\0';i++)
        count[str1[i]]++;
    for(int i = 0;str2[i] != '\0';i++)
        count[str2[i]]--;
    for(int i = 0;i < 256;i++)
    {
        if(count[i] != 0)
            return 0;
    }
    return 1;
}
int main()
{
    char str1[100],str2[100];

    printf("Enter string1: ");
    scanf("%[^\n]",str1);
    printf("Enter string2: ");
    scanf(" %[^\n]",str2);

    if(check_anagram(str1,str2))
        printf("True");
    else
        printf("False");
}
