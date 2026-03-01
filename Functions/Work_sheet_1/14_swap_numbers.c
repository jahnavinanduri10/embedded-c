#include <stdio.h>

void swap(int *num1,int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    printf("Before swapping n1 = %d, n2 = %d\n",n1,n2);
    swap(&n1,&n2);
    printf("After swapping n1 = %d, n2 = %d\n",n1,n2);
}