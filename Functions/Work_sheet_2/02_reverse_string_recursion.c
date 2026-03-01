#include <stdio.h>
#include <string.h>

void reverse(char *str,int ind,int len)
{
    char temp;
    if(ind < len/2)
    {
        temp = str[ind];
        str[ind] = str[len-ind-1];
        str[len-ind-1] = temp;
        reverse(str,ind+1,len);
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);

    int len = strlen(str);

    reverse(str,0,len);
    printf("Reversed string: %s",str);
}