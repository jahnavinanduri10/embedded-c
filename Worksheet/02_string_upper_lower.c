#include <stdio.h>

void to_upper(char str[])
{
    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] ^ 32;
    }
}

void to_lower(char str[])
{
    for(int i = 0;str[i] != '\0';i++)
    {
         if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] ^ 32;
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]",str);

    // to_upper(str);
    // printf("Upper case: %s\n",str);
    to_lower(str);
    printf("Lower case: %s\n",str);
}