#include <stdio.h>
#include <string.h>

#define MAX 256

// Build bad character table
void badCharHeuristic(char *pattern, int m, int badChar[MAX])
{
    for (int i = 0; i < MAX; i++)
        badChar[i] = -1;

    for (int i = 0; i < m; i++)
        badChar[(unsigned char)pattern[i]] = i;
}

// Boyer-Moore search
void boyerMoore(char *text, char *pattern)
{
    int n = strlen(text);
    int m = strlen(pattern);

    int badChar[MAX];
    badCharHeuristic(pattern, m, badChar);

    int shift = 0;

    while (shift <= n - m)
    {
        int j = m - 1;

        // Compare from right to left
        while (j >= 0 && pattern[j] == text[shift + j])
            j--;

        // Pattern found
        if (j < 0)
        {
            printf("Pattern found at index %d\n", shift);

            // Shift pattern
            shift += (shift + m < n)
                     ? m - badChar[(unsigned char)text[shift + m]]
                     : 1;
        }
        else
        {
            // Bad character shift
            int badIndex = badChar[(unsigned char)text[shift + j]];
            shift += (j - badIndex > 1) ? (j - badIndex) : 1;
        }
    }
}

int main()
{
    char text[] = "hello world";
    char pattern[] = "world";

    boyerMoore(text, pattern);
    return 0;
}