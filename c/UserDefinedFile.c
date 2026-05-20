////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Program      : File Create, Open, Write Demo
// Input        : File name, Data string
// Output       : Creates file, opens it, writes data, prints bytes written
// Methods      : creat(), open(), write(), close(), printf(), scanf(), strlen()
// Description  : Demonstrates file creation, opening, and writing using system calls in C.
// Author       : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Creates a file, writes user data, and closes file descriptor.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    char FileName[30] = {'\0'};
    char Data[30] = {'\0'};

    int fd =0, ret = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    fd = creat(FileName, 0777);

    if (fd == -1){
        printf("Unable to create file.");
        return -1;
    }
    else 
        printf("File created with fd: %d.\n",fd);

    fd = open(FileName, O_RDWR);

    if (fd == -1){
        printf("Unable to open file.");
        return -1;
    }
    else 
        printf("File opened with fd: %d.\n",fd);

    printf("Enter data: ");
    scanf("%s", Data);

    ret = write(fd, Data, strlen(Data));

    printf("%d bytes written successfully.\n", ret);

    close(fd);

    return 0;
}
