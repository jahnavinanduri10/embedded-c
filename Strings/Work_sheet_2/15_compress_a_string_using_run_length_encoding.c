#include <stdio.h>

int main()
{
    char str[100];
    int count, i;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Output: ");

    for (i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    printf("\n");
    return 0;
}