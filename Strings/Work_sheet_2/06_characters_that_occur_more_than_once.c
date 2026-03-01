#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    int freq[256] = {0};

    for(int i = 0;str[i] != '\0';i++)
        freq[(char)str[i]]++;

    for(int i = 0;i < 256;i++)
    {
        if(freq[i] > 1)
            printf("%c ",i);
    }

}