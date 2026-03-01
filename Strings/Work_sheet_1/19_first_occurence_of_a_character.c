#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    char word;
    printf("Enter character: ");
    scanf(" %c",&word);
    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] == word)
        {
            printf("Position: %d",i);
            return 0;
        }
    }

    printf("Not found");
}