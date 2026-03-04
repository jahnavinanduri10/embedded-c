#include <stdio.h>
#include <string.h>

int contains_all_chars(char *str, char *word)
{
    for(int i = 0;word[i] != '\0';i++)
    {
        if(strchr(str,word[i]) == NULL)
            return 0;
    }
    return 1;
}
int main()
{
    char *list[] = {"cat","tac","act","dog"};
    char word[] = "act";

    for(int i = 0;i < 4;i++)
    {
        if(contains_all_chars(list[i],word))
            printf("%s ",list[i]);
    }
}