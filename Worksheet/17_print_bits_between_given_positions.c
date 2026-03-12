#include <stdio.h>

int main()
{
    unsigned char num;
    printf("Enter a byte: ");
    scanf(" %c",&num);

    int end,start;
    printf("Enter positions(end,start):");
    scanf("%d %d",&end,&start);
    for(int i = end;i >= start;i--)
    {  
        printf("%d",(num >> i) & 1);
    }
}