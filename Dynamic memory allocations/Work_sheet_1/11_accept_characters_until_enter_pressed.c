/*Accept Characters Until Enter Pressed
Goal: Dynamically grow a string buffer with realloc.
Activity:
•	Start with a small buffer.
•	Accept characters one by one.
•	Reallocate buffer each time a new character is added.
•	Stop on newline character.
•	Null-terminate and print the string.
•	Free the memory.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *buff = malloc(sizeof(char));
    char ch;
    if(buff == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    int i = 0;
    printf("Enter characters: ");
    while((ch = getchar()) != '\n')
    {
        buff[i] = ch;
        i++;
        buff = realloc(buff,(i+1)*sizeof(char));
    }
    buff[i] = '\0';
    printf("%s",buff);
    free(buff);
}