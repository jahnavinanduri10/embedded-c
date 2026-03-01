#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    char word[50];
    printf("Enter the word: ");
    scanf("%s",word);

    int word_length,count = 0,j;
    word_length = strlen(word);

    for(int i = 0;str[i] != '\0';i++)
    {
        count = 0,j = 0;
       while(word[j] != '\0')
        {
            if(str[i+j] == word[j])
            {
                count++;
                j++;
            }
            else break;
        }
        if(count == word_length)
        {
            printf("Found at position %d",i+1);
            return 0;
        }
    }
}