#include <stdio.h>
#include <string.h>

int expand(char *s,int left,int right)
{
    while(left >= 0 && right < strlen(s) && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left - 1;
}
int main()
{
    char s[] = "babad";
    int start = 0,end = 0;

    for(int i = 0;i < strlen(s);i++)
    {
        int len1 = expand(s,i,i);   //odd length
        int len2 = expand(s,i,i+1); //even length

        int len = (len1 > len2) ? len1 : len2;

        if(len > end - start)
        {
            start = i - (len - 1)/2;
            end = i + len / 2;
        }
    }

    for(int i = start;i <= end;i++)
        printf("%c",s[i]);
}