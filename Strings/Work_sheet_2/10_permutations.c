#include <stdio.h> 
#include <string.h>
void combination(char str[ ],int start,int end)
{
    int i,temp;
    if(start == end)
    {
        printf("%s ",str);
        return ;
    }
    for(i = start ; i <= end ; i++)
    {
        temp = str[i];
        str[i] = str[start];
        str[start] = temp;
        
        combination(str,start + 1,end);
        
        temp = str[i];
        str[i] = str[start];
        str[start] = temp;
    }
    
}

int main()

{
    char str[100];
    int n,flag = 0;
    int res;
    printf("Enter a string: ");
    scanf("%100[^\n]",str);    
    n = strlen(str);
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n && j != i ;j++)
        {
            if(str[i] == str[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            break;
    }
    if(flag)
        printf("Error: please enter distinct characters");
    else
        combination(str,0,n-1);                       
    return 0;
}


