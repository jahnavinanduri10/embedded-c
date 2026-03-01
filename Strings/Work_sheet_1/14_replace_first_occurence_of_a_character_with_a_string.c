#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    char ch,replace;
    printf("Enter the character to be replaced with: ");
    scanf(" %c %c",&ch,&replace);

    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ch)
        {
            str[i] = replace;
            break;
        }
    }
    printf("%s",str);
}