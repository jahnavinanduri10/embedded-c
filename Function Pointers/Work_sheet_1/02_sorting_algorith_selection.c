#include <stdio.h>

void bubble_sort(int arr[],int n)
{
    for(int i = 0;i < n -1;i++)
    {
        for(int j = 0;j < n - i - 1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Bubble sort successful");
}

void selection_sort(int arr[],int n)
{
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
     printf("Selection sort successful");
}

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
     printf("Insertion sort successful");
}

int main()
{
    int (*farr[])(int[],int) = {bubble_sort,selection_sort,insertion_sort};

    int arr[5] = {5,9,0,2,4};
    int n;
    printf("Enter: \n1. Bubble sort\n2. Selection sort\n3. Insertion sort\n");
    scanf("%d",&n);

    if(n == 1)
        farr[0](arr,5);
    else if(n == 2)
        farr[1](arr,5);
    else if(n == 3)
        farr[2](arr,5);
    else
        printf("Invalid");
}