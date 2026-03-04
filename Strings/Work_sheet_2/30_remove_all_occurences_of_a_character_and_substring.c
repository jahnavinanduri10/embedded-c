#include <stdio.h>
#include <string.h>

void remove_occurrences(char *str)
{
    int n = strlen(str);
    for(int i = 0;i < n;i++)
    {
        if(str[i] == 'b')
        {
            for(int j = i;j < n;j++)
                str[j] = str[j+1];
            i--;
        }
        else if(strncmp(&str[i],"ac",2) == 0)
        {
            for(int j = i;j < n;j++)
                str[j] = str[j+2];
            i--;
        }
    }
}

int main()
{
    char str[] = "abacb";
    remove_occurrences(str);
    printf("%s",str);
}