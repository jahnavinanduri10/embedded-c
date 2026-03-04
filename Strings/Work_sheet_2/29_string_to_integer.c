#include <stdio.h>
#include <string.h>

int string_to_int(char *str)
{
    int flag = 0,i = 0,res = 0;
    if(str[0] == '+')
    {
        flag = 1;
        i = 1;
    }
    else if(str[0] == '-')
    {
        flag = 2;
        i = 1;
    }
    else if(str[0] >= '0' && str[0] <= '9')
        flag = 1;
    else
        return flag;
    
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            res = (res * 10) + (str[i] - 48);
            i++;
        }
        else
           break;
    }
    if(flag == 1)
        return res;
    else if(flag == 2)
        return (-res);
    else 
        return 0;

}

int main()
{
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]",str);

    printf("%d\n",string_to_int(str));
}