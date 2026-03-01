#include <stdio.h>
#include <ctype.h>

void remove_letters(char str1[], char str2[])
{
    int i, j, k;

    for (i = 0; str2[i] != '\0'; i++)
    {
        for (j = 0; str1[j] != '\0'; )
        {
            if (tolower(str2[i]) == tolower(str1[j]))
            {
                for (k = j; str1[k] != '\0'; k++)
                {
                    str1[k] = str1[k + 1];
                }
            }
            else
            {
                j++;
            }
        }
    }
}

int main()
{
    char str1[30], str2[30];

    printf("Enter string1: ");
    scanf("%[^\n]", str1);

    getchar();

    printf("Enter string2: ");
    scanf("%[^\n]", str2);

    remove_letters(str1, str2);

    printf("After removing s1 : %s\n", str1);

    return 0;
}
