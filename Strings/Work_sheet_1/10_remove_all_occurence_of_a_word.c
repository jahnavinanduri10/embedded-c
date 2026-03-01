#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    char word[50];
    printf("Enter the word to remove: ");
    scanf("%s",word);
    int len_word = strlen(word);

    int i = 0,k = 0;

    while(str[i] != '\0')
    {
        int flag = 0;

        for(int j = 0;j < len_word;j++)
        {
            if(str[i + j] != word[j])
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
            i += len_word;
        else
            str[k++] = str[i++];
    }

    str[k] = '\0';
    printf("%s",str);
}