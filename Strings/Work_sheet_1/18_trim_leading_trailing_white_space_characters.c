#include <stdio.h>
#include <string.h>

void trim(char *str)
{
    char *start = str;
    char *end;

    while(*start == ' ')
        start++;
    
    end = start + strlen(start) - 1;
    while(end > start && *end == ' ')
         end--;
    *(end+1) = '\0';
    memmove(str,start,end-start+2);
}
int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%[^\n]",str);
    trim(str);
    printf("After trimming: %s\n",str);
}