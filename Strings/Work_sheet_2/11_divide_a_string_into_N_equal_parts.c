#include <stdio.h>
#include <string.h>

void divideString(char str[],int n)
{
    int len = strlen(str);
    if(len % n != 0)
    {
        printf("Cannot be divided");
        return;
    }

    int parts = len / n;

    for(int i = 0;i < len;i++)
    {
        printf("%c",str[i]);

        if((i+1) % parts == 0)
            printf("\n");
    }
}

int main()
{
    char str[100];
    int n;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter number of parts: ");
    scanf("%d", &n);

    divideString(str, n);

    return 0;
}