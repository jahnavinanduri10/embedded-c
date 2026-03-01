#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[20];

    printf("Enter file name: ");
    scanf("%s", filename);

    if(remove(filename) == 0)
        printf("File %s deleted\n",filename);

}