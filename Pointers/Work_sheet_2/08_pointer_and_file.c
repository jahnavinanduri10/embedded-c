#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char *buffer;
    long size;

    fp = fopen("data.txt", "w");
    if (fp == NULL)
        return 1;

    fputs("Pointer and File IO Example", fp);

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    rewind(fp);

    buffer = malloc(size + 1);
    if (buffer == NULL)
    {
        fclose(fp);
        return 1;
    }

    fread(buffer, 1, size, fp);
    buffer[size] = '\0';

    printf("Read from file: %s\n", buffer);

    fseek(fp, 0, SEEK_END);
    fputs("\nData written using dynamic buffer", fp);

    free(buffer);
    buffer = NULL;

    fclose(fp);

    return 0;
}