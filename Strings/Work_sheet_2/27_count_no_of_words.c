#include <string.h>
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);

    int count = 0;
    char *token = strtok(str," ");
    while(token != NULL)
    {
        count++;
        token = strtok(NULL," ");
    }

    printf("%d",count);
}