#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    char ch;
    printf("Enter a character to remove: ");
    scanf(" %c",&ch);
    int len = strlen(str),i = len-1,index = -1;
    while(i > 0)
    {
        if(str[i] == ch)
        {
            index = i;
            break;
        }
        i--;
    }

    if(index != -1)
    {
        for(int i = index; i < len;i++)
            str[i] = str[i+1];
        printf("%s",str);
    }
}