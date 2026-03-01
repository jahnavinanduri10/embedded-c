#include <stdio.h>
#include <string.h>

int Rotation(char *str1,char *str2)
{
    if(strlen(str1) != strlen(str2))
        return 0;
    
    char temp[200];
    strcpy(temp,str1);
    strcat(temp,str1);

    return (strstr(temp,str2) != NULL);

}
int main()
{
    char str1[100],str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (Rotation(str1, str2))
        printf("Rotation is possible\n");
    else
         printf("Rotation is not possible\n");
}