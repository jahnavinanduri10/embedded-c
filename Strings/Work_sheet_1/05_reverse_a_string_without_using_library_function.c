#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);

    int length = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        length++;
        i++;
    }

    for(int i = 0;i < length/2;i++)
    {
        char temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }

    printf("%s",str);
}