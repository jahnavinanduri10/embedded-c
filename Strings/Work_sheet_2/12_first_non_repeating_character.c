#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);

    int freq[256] = {0};
    for(int i = 0;str[i] != '\0';i++)
        freq[(unsigned char)str[i]]++;

    for(int i = 0;str[i] != '\0';i++)
    {
        if(freq[(unsigned char)str[i]] == 1)
        {
            printf("%c",str[i]);
            break;
        }
    }

}