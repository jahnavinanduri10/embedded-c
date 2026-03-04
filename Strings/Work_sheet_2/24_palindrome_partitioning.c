#include <stdio.h>
#include <string.h>
#include <limits.h>

int is_palindrome(char *s,int start,int end)
{
    while(start < end)
    {
        if(s[start] != s[end])
            return 0;
        start++,end--;
    }
    return 1;
}
int min_cuts(char *s,int start,int end)
{
    if(start >= end || is_palindrome(s,start,end))
        return 0;
    
    int min = INT_MAX;

    for(int i = start;i < end;i++)
    {
        if(is_palindrome(s,start,i))
        {
            int cuts = 1 + min_cuts(s,i+1,end);
            if(cuts < min)
                min = cuts;
        }
    }
    return min;
}
int main()
{
    char str[]= "ababbbabbababa";
    printf("%d\n",min_cuts(str,0,strlen(str)-1));
}