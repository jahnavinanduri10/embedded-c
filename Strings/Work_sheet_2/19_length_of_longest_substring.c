#include <stdio.h>
#include <string.h>

int longest_sub_string(char *s)
{
    int last_index[256];
    for(int i = 0;i < 256;i++)
        last_index[i] = -1;
    int max_len = 0,start = 0;

    for(int i = 0;s[i] != '\0';i++)
    {
        if(last_index[s[i]] >= start)
            start = last_index[s[i]] + 1;

        last_index[s[i]] = i;

        int len = i- start + 1;
        if(len > max_len)
            max_len = len;
    }
    return max_len;
}

int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%[^\n]",str);
    printf("%d",longest_sub_string(str));
}