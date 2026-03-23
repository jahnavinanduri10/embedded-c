#include <stdio.h>

int main()
{
    int nums[] = {1,0,1,1,0,1};
    int n = sizeof(nums)/sizeof(int);
    int max = 0,count = 0;
    for(int i = 0;i < n;i++)
    {
       if(nums[i] == 1)
        {
            count++;
            if(count > max)
                max = count;
        }
        else
            count = 0;
    }

    printf("%d\n",max);
}