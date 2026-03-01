#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    char ch;
    printf("Enter the character to find: ");
    scanf(" %c",&ch);
    int len = strlen(str),i = len-1,index = -1;
    while(i > 0)
    {
        if(str[i] == ch)
        {
            printf("Position: %d",i);
            return 0;
        }
        i--;
    }

}