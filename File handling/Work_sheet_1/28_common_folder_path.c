#include <stdio.h>
#include <string.h>

void commonPath(char paths[][100], int n, char result[])
{
    strcpy(result, paths[0]);

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        while (result[j] && paths[i][j] && result[j] == paths[i][j])
            j++;

        result[j] = '\0';
    }

    int len = strlen(result);
    while (len > 0 && result[len - 1] != '/')
        len--;

    result[len] = '\0';
}

int main()
{
    char paths[3][100] = {
        "/home/user/docs/a.txt",
        "/home/user/docs/b.txt",
        "/home/user/docs/old/c.txt"
    };

    char result[100];

    commonPath(paths, 3, result);

    printf("Common folder path: %s\n", result);

    return 0;
}