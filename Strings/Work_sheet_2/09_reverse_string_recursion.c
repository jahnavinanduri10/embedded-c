#include <stdio.h>
#include <string.h>

void reverse_recursive(char *str,int ind,int len)
{
    int temp;
    if(ind < len / 2)
    {
        temp = str[ind];
        str[ind] = str[len - ind - 1];
        str[len - ind - 1] = temp;
        reverse_recursive(str,ind + 1,len);
    }
}

int main()
{
    char str[30];
    int i,len = 0,j = 0;
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    len = strlen(str);
    reverse_recursive(str,j,len);
    
    printf("Reversed string is %s\n", str);
}