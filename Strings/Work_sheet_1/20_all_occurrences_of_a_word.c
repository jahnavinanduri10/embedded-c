#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    char word[50];
    printf("Enter word: ");
    scanf("%s",word);

    int str_len = strlen(str),word_len = strlen(word),word_count = 0;

    printf("Found at position: ");
    for(int i = 0; i <= str_len - word_len; i++)
    {
        if(strncmp(str+i,word,word_len) == 0)
        {
            printf("%d ",i);
        }
    }
}