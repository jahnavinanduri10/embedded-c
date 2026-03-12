#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0;i < n;i++)
        scanf("%d",&arr[i]);

    int new_arr[n],index=0,flag = 0;
    new_arr[0] = arr[0];

    for(int i = 1;i < n;i++)
    {
        flag = 0;
        for(int j = 0;j <= index;j++)
        {
            if(arr[i] == new_arr[j])
            {
                flag = 1;
                break;
            }
        }
        if(!flag) 
        {
            new_arr[index+1] = arr[i];
            index++;
        }
    }
    printf("Array after removing duplicates: ");
    for(int i = 0;i <= index;i++)
        printf("%d ",new_arr[i]);
}