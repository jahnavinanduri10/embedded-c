#include <stdio.h>
#include <dirent.h>

void listFiles(const char *path)
{
    DIR *dir = opendir(path);
    struct dirent *entry;

    if (!dir) {
        perror("Error opening directory");
        return;
    }

    while((entry = readdir(dir)) != NULL)
    {
        if(strcmp(entry->d_name,".") != 0 && strcmp(entry->d_name,"..") != 0)
            printf("%s\n",entry->d_name);
    }

    closedir(dir);
}