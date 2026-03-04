#include <stdio.h>
#include <string.h>
#include <limits.h>

int contains_all(char *sub, char *pat)
{
    int freq1[256] = {0};
    int freq2[256] = {0};

    for (int i = 0; pat[i]; i++)
        freq2[pat[i]]++;

    for (int i = 0; sub[i]; i++)
        freq1[sub[i]]++;

    for (int i = 0; i < 256; i++)
        if (freq1[i] < freq2[i])
            return 0;

    return 1;
}

void smallest_substring(char *str, char *pat)
{
    int min_len = INT_MAX;
    int start = -1;

    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            char temp[1000];
            strncpy(temp, str + i, j - i + 1);
            temp[j - i + 1] = '\0';

            if (contains_all(temp, pat))
            {
                int len = j - i + 1;
                if (len < min_len)
                {
                    min_len = len;
                    start = i;
                }
                break; 
            }
        }
    }

    if (start == -1)
        printf("No such substring\n");
    else
        printf("%.*s", min_len, str + start);
}

int main()
{
    char str1[] = "this is a test string";
    char str2[] = "tist";

    smallest_substring(str1, str2);
    return 0;
}