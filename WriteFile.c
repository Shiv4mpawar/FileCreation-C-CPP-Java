#include<stdio.h>
#include<unistd.h>      // universel.h
#include<fcntl.h>      // file control.h
#include<stdlib.h>       

int main()
{
    char Name[30];
    int FD = 0;
    char Data[] = "India is my country";

    printf("Enter file name that you whant to open :\n");
    scanf("%s",Name);

    FD = open(Name,O_RDWR);  // marco in capital :-  // open  read write   // 3 files madhe aahet 
    if(FD == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened\n");
    }
    write(FD,Data,19);
    
    return 0;
}