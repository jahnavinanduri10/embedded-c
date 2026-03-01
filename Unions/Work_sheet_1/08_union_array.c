#include <stdio.h>
#include <stdlib.h>

union data{
    int a;
    float f;
    char ch;
};

int main()
{
    union data darr[2];

    for(int i = 0;i < 2;i++)
    {
        printf("Enter details of %d: \n",i+1);
        printf("int,float,char: ");
        scanf("%d %f %c",&darr[i].a,&darr[i].f,&darr[i].ch);
    }

    printf("Data\n");

    for(int i = 0;i < 2;i++)
    {
        printf("Details -- %d\n",i+1);
        printf("int = %d\n",darr[i].a);
        printf("float = %.2f\n",darr[i].f);
        printf("int = %c\n",darr[i].ch);
    }
}