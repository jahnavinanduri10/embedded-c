#include <stdio.h>
#include <string.h>

void second_highest_frequency(char *str)
{
    int freq[256] = {0};

    for(int i = 0;str[i] != '\0';i++)
        freq[str[i]]++;

    int max = 0,second_max = 0;
    for(int i = 0;i < 256;i++)
    {
        if(freq[i] > max)
        {
            second_max = max;
            max = freq[i];
        }
        else if(freq[i] > second_max && freq[i] < max)
            second_max = freq[i];
    }
    for(int i = 0;i < 256;i++)
    {
        if (freq[i] == second_max)
            {
                printf("%c\n",i);
                break;
            }
    }
    
}

int main()
{
    char str[] = "aabababa";
    second_highest_frequency(str);
}

