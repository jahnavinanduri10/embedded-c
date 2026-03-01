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

        int pos[n],neg[n];
        int pos_index = 0,neg_index = 0;

        for(int i = 0;i < n;i++)
        {
            if(arr[i] < 0)
                neg[neg_index++] = arr[i];
            else 
                pos[pos_index++] = arr[i];
        }

        int i = 0,j = 0,k = 0;
        while(i < neg_index && j < pos_index)
        {
            arr[k++] = neg[i++];
            arr[k++] = pos[j++];
        }

        while(i < neg_index)
            arr[k++] = neg[neg_index++];

         while(j < neg_index)
            arr[k++] = pos[pos_index++];

        printf("Rearranged array: ");
         for(int i = 0; i < n; i++)
             printf("%d ", arr[i]);

}