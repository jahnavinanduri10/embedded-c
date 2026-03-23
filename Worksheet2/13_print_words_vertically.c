#include <stdio.h>
#include <string.h>

int main()
{
    char input[] ="TO BE OR NOT TO BE";
    int n = 0, max_len = 0;
    char words[10][10];

    char *token = strtok(input," ");
    while(token != NULL)
    {
        strcpy(words[n],token);
        if(strlen(token) > max_len)
            max_len = strlen(token);
        n++;
        token = strtok(NULL," ");
    }

    for(int i = 0;i <max_len;i++)
    {
        printf("\"");
        for(int j = 0;j < n;j++)
        {
            if(i < strlen(words[j]))
                printf("%c",words[j][i]);
        }
        printf("\"");
    }
}