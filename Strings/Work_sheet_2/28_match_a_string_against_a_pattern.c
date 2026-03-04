#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isMatch(char *str, char *pattern)
{
    int i = 0, j = 0;
    int star = -1;
    int match = 0;

    while (str[i])
    {
        // Case 1: characters match or '?'
        if (pattern[j] == str[i] || pattern[j] == '?')
        {
            i++;
            j++;
        }
        // Case 2: pattern has '*'
        else if (pattern[j] == '*')
        {
            star = j;
            match = i;
            j++;
        }
        // Case 3: mismatch but previous '*' exists
        else if (star != -1)
        {
            j = star + 1;
            match++;
            i = match;
        }
        // Case 4: mismatch and no '*'
        else
            return false;
    }

    // Skip remaining '*' in pattern
    while (pattern[j] == '*')
        j++;

    return pattern[j] == '\0';
}

int main()
{
    char str[100],pattern[100];
    scanf("%[^\n]",str);
    scanf(" %[^\n]",pattern);

    if (isMatch(str, pattern))
        printf("Match\n");
    else
        printf("No Match\n");

    return 0;
}