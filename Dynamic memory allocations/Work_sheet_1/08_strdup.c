/*Implement Custom strdup()
Goal: Practice duplicating a string using dynamic memory.
Activity:
•	Log Session a function that takes a string as input.
•	Allocate memory for a copy of the string.
•	Copy character by character.
•	Return the copied string.
•	Call this function and display the result.
•	Free the copied string.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *str = "Hello";

    char *copy = malloc(strlen(str) + 1);
    if(copy == NULL)
        return 0;
    int i = 0;
    for(i = 0;str[i] != '\0';i++)
    {
        copy[i] = str[i];
    }

    copy[i] = '\0';

    printf("After copying: %s\n",copy);

    free(copy);
}