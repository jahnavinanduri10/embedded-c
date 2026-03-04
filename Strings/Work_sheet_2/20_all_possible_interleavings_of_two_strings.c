#include <stdio.h>
#include <string.h>

void inter_leave(char *s1,char *s2,char *res,int i,int j,int k)
{
    //if both strings are completed, print result
    if(s1[i] == '\0' && s2[j] == '\0')
    {
        res[k] = '\0';
        printf("%s\n",res);
        return;
    }

    //if characters remain in s1, add to result
    if(s1[i] != '\0')
    {
        res[k] = s1[i];
        inter_leave(s1,s2,res,i+1,j,k+1);
    }

    //if characters remain in s2, add to result
    if(s2[j] != '\0')
    {
        res[k] = s2[j];
        inter_leave(s1,s2,res,i,j+1,k+1);
    }
}

int main()
{
    char s1[] = "AB";
    char s2[] = "CD";
    char res[100];

    inter_leave(s1,s2,res,0,0,0);
}