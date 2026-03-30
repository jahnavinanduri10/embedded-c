/*Tokenize String Dynamically
Goal: Store each word of a sentence in dynamically allocated memory.
Activity:
•	Accept a sentence as input.
•	Use strtok() to split it into words.
•	Use malloc to copy each token into a new memory block.
•	Store them in a pointer array.
•	Print all words and free each block
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[100];
    char *tokens[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(input,sizeof(input),stdin);
    input[strcspn(input,"\n")] == '\0';

    char *token = strtok(input," ");
    while(token != NULL)
    {
        tokens[count] = malloc(strlen(token) + 1);
        if(tokens[count] == NULL)
        {
            printf("Memory allocation failed\n");

            for(int i = 0;i < count;i++)
                free(tokens[i]);
            return 1;
        }
        strcpy(tokens[count],token);
        count++;
        token = strtok(NULL," ");
    }

    printf("Words: \n");
    for(int i = 0;i < count;i++)
        printf("%s\n",tokens[i]);

    for(int i = 0;i < count;i++)
        free(tokens[i]);

}