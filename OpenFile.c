#include<stdio.h>
#include<unistd.h>      // universel.h
#include<fcntl.h>      // file control.h
#include<stdlib.h>       

int main()
{
    char Name[30];
    int FD = 0;

    printf("Enter file name that you whant to open :\n");
    scanf("%s",Name);

    FD = open(Name,O_RDWR);  // marco in capital :-  // open  read write   // 3 files madhe aahet 
    if(FD == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened\n");
    }

    return 0;
}