#include <stdio.h>
#include <string.h>

void removeduplicates(char *str)
{
    int len = strlen(str);
    for(int i = 0;i < len;i++)
    {
        for(int j = i + 1;j < len;j++)
        {
            if(str[i] == str[j])
            {
                for(int k = j;k < len;k++)
                    str[k] = str[k+1];
                len--;
                j--;
            }
        }
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    removeduplicates(str);

    printf("After removing duplicates: %s\n",str);
}