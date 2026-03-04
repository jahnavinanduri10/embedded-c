#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// using stacks
// traverse through string
// if top of the stack equal to current character pop else push

char *remove_adjacent_duplicates(char *s)
{
    int n= strlen(s);
    char *stack = malloc(sizeof(char) * (n+1));
    int i = 0;// index for stack

    for(int j = 0;j < n;j++)
    {
        char c = s[j];
        if(i > 0 && stack[i-1] == c)
            i--;
        else
            stack[i++] = c;
    }

    stack[i] = '\0';
    return stack;
}

int main()
{
    char s[] = "azxxzy";
    char *res = remove_adjacent_duplicates(s);
    printf("%s\n",res);
    free(res);
}
