#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a,const void *b)
{
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;

    return strcmp(str1,str2);
}

int main()
{
    char *arr[] ={"John","Alice","Bob"};

    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr,n,sizeof(char*),compare);

    printf("Sorted strings: \n");
    for(int i = 0;i < n;i++)
        printf("%s\n",arr[i]);
}