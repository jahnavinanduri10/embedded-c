#include <sys/stat.h>
#include <time.h>

int main()
{
    struct stat fileStat;
    char timeStr[100];
    const char* filename = "example.txt";

    if(stat(filename,&fileStat) == 0)
    {
        strftime(timeStr,sizeof(timeStr), "%Y-%m-%d %h:%M:%S",localtime(&fileStat.st_mtime));
        printf("Last modified data amd time: %s\n",timeStr);
    }
    
}