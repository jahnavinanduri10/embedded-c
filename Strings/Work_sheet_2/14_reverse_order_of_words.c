#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    char *words[10];
    int count = 0;

    char *token = strtok(str," ");
    while(token != NULL)
    {
        words[count++] = token;
        token = strtok(NULL," ");
    }

    for(int i = count - 1;i >= 0;i--)
        printf("%s ",words[i]);
}