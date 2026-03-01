#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min, max, i;

    // Initialize min and max
    if(n % 2 == 0) {
        // If even, compare first two elements
        if(arr[0] < arr[1]) {
            min = arr[0];
            max = arr[1];
        } else {
            min = arr[1];
            max = arr[0];
        }
        i = 2; // start from third element
    } else {
        // If odd, first element is both min and max
        min = max = arr[0];
        i = 1; // start from second element
    }

    // Process remaining elements in pairs
    while(i < n - 1) {
        int local_min, local_max;

        if(arr[i] < arr[i+1]) {
            local_min = arr[i];
            local_max = arr[i+1];
        } else {
            local_min = arr[i+1];
            local_max = arr[i];
        }

        if(local_min < min) min = local_min;
        if(local_max > max) max = local_max;

        i += 2; // move to next pair
    }

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}