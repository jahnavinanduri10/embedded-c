#include <stdio.h>
#include <string.h>

int palindrome(char *str, int ind, int len)
{
    if (ind >= len / 2)
        return 1;  

    if (str[ind] != str[len - ind - 1])
        return 0;  

    return palindrome(str, ind + 1, len); 
}


int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);

    int len = strlen(str);

    if(palindrome(str,0,len))
        printf("Palindrome");
    else
        printf("Not a palindrome");
}