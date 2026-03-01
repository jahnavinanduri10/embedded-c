
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    int i = 0,j = 0;
    while(str[i] != '\0')
    {
        j = i+1;
        while(str[j] != '\0')
        {
            if(str[i] == str[j])
                str[j] = 0 + '0';
            j++;
        }
        i++;
    }

    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] != '0')
            printf("%c",str[i]);
    }
}