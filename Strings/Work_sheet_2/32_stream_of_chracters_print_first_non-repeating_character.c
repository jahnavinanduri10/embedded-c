// For a stream of characters, print the first non-repeating character at each step.
// Input stream: "aabc"
// Output: "a a b b"

#include <stdio.h>
#include <string.h>
void print_first_non_repeating(char *str)
{
    int freq[256] = {0};
    char queue[200];
    int front = 0,rear = 0;

    for(int i = 0;str[i];i++)
    {
        char c = str[i];
        freq[c]++;  // counting
        queue[rear++] = c; // adding to queue

        // checking if the character occurs more than 1 if occurs move the front
        while(front < rear && freq[queue[front]] > 1) 
            front++;
        if(front < rear)
            printf("%c ",queue[front]);
        
    }
}


int main()
{
    char stream[] = "aabc";
    print_first_non_repeating(stream);
}