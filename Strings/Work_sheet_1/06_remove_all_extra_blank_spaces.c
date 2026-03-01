#include <stdio.h>

int main()
{
    char str[100];
    
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    
    int i = 0,j,count;
    while(str[i] != '\0')
    {
        count = 0;
        if(str[i] == ' ')
        {
            if(str[i + 1] == ' ')
            {
                count = 1;
                j = i;
                while(str[j] != '\0')
                {
                    str[j] = str[j + 1];
                    j++;
                }
            }
        }
        if(count == 0)
            i++;
    }
    
    printf("%s\n", str);
}