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

    int max = 0;
    char max_char;

    for(int i = 0;i < 256;i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            max_char = i;
        }
    }
    printf("%c",max_char);

}