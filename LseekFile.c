#include<stdio.h>
#include<unistd.h>      // universel.h
#include<fcntl.h>      // file control.h
#include<stdlib.h>       

int main()
{
    char Name[30];
    int FD = 0;
    char Data[30] = {'\0'};

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

    lseek(FD,9,SEEK_SET); // 0 opset starting     // SEEK_END //SEEK_CUR

    read(FD,Data,10);h

    printf("Data from file is : \n");  
    write(1,Data,10);   // 1 :- std out put : - moniter
    
    close(FD);
     
    return 0;
}