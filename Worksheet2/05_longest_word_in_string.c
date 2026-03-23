#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "longest word in the string";
    char *token = strtok(str," ");
    char longest[50] = " ";

    while(token != NULL)
    {
        if(strlen(token) > strlen(longest))
            strcpy(longest,token);
        token = strtok(NULL," ");
    }

    printf("Longest word %s\n",longest);
}