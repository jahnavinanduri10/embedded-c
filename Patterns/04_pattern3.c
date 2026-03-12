#include <stdio.h>

void shift_array(int arr[],int n,int pos)
{
    int temp = arr[0];
    for(int i = 0;i < pos;i++)
        arr[i] = arr[i+1];
    arr[pos] = temp;
}

void print(int arr[],int n)
{
    for(int i = 0;i < n;i++)
        printf("%d",arr[i]);
}
int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++)
        arr[i] = i+1;

    for(int i = 0;i < n;i++)
    {
            print(arr,n);
            shift_array(arr,n,n-i-1);
        printf("\n");
    }

}