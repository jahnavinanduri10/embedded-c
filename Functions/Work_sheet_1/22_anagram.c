#include <stdio.h>
#include <string.h>

int anagram(char *str1,char *str2)
{
    int freq[256] = {0};
    if(strlen(str1) != strlen(str2))
        return 0;
    
    for(int i = 0;str1[i] != '\0';i++)
    {
        freq[(char)str1[i]]++;
        freq[(char)str2[i]]--;
    }

    for(int i = 0;i < 256;i++)
    {
        if(freq[i] != 0)
            return 0;
    }
    return 1;
}

int main()
{
    char str1[100],str2[100];

    printf("Enter two strings: ");
    scanf("%s %s",str1,str2);

    if(anagram(str1,str2))
        printf("Anagram");
    else
        printf("Not an anagram");
}