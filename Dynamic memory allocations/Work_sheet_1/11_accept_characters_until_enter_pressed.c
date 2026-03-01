#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *buff = malloc(sizeof(char));
    char ch;
    if(buff == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    int i = 0;
    printf("Enter characters: ");
    while((ch = getchar()) != '\n')
    {
        buff[i] = ch;
        i++;
        buff = realloc(buff,(i+1)*sizeof(char));
    }
    buff[i] = '\0';
    printf("%s",buff);
    free(buff);
}