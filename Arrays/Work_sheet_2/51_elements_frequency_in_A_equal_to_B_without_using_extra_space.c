#include <stdio.h>

int element_count(int arr[],int size,int x)
{
    int count = 0;
    for(int i = 0;i < size;i++)
    {
        if(arr[i] == x)
            count++;
    }

    return count;
}

int same_elements(int a[],int b[],int m,int n)
{
    if(m != n)
        return 0;

    for(int i = 0;i < m;i++)
    {
        int a_count = element_count(a,m,a[i]);
        int b_count = element_count(b,n,a[i]);

        if(a_count != b_count)
            return 0;
    }

    return 1;
}

int main()
{
    int a[] = {1,2,2,3};
    int b[] = {2,1,1,2};

    if(same_elements(a,b,4,4))
        printf("Yes");
    else
        printf("No");
}