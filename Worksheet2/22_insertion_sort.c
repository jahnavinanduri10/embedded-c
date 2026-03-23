#include <stdio.h>


void insertion_sort(int arr[],int n)
{
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Insert key at correct position
    }
     printf("Insertion sort successful\n");
}

int main()
{
    int arr[5]= {5,9,0,2,4};   
    insertion_sort(arr,5);

    for(int i = 0;i < 5;i++)
        printf("%d ",arr[i]);
}