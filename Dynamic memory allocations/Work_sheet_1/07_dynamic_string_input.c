/*Dynamic String Input
Goal: Handle strings with dynamic memory allocation.
Activity:
•	Ask the user to enter a string.
•	Find its length using strlen.
•	Allocate memory to store the string using malloc.
•	Copy the string to the new memory.
•	Print the copied string.
•	Free the memory.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    printf("enter a string: ");
    scanf("%s",str);

    int len = strlen(str);

    char *str1 = malloc(len);
    strcpy(str1,str);

    printf("Copied string is %s\n",str1);
    free(str1);
}