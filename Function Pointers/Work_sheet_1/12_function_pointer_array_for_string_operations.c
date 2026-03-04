#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef void (*string_func)(char*);

void reverse_string(char *str)
{
    int i, len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
}

void upper_case(char *str)
{
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Uppercase string: %s\n", str);
}
void count_vowels(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || 
            c == 'o' || c == 'u') {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
}

typedef enum{
    REVERSE = 0,
    UPPERCASE,
    VOWEL_COUNT,
    OP_COUNT
}operation_type;

string_func operations[OP_COUNT] = {
    reverse_string,
    upper_case,
    count_vowels
};

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    printf("\nChoose operation:\n");
    printf("0 - Reverse String\n");
    printf("1 - Convert to Uppercase\n");
    printf("2 - Count Vowels\n");

    printf("\nEnter choice: ");
    scanf("%d", &choice);


    if (choice >= 0 && choice < OP_COUNT) {
        operations[choice](str);  
    } else {
        printf("Invalid choice\n");
    }
}
