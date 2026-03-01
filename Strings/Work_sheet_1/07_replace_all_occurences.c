#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    char element,character;
    printf("Enter character to be replaced with : ");
    scanf(" %c %c",&character,&element);
    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] == character)
            str[i] = element;
    }

    printf("%s",str);
}