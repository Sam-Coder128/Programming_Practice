///////////////////////////////////////////////////////////////
//
// File Name : FileOpenDemo.c
// Functions : main()
// Description: Explains file opening using open() system call.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

///////////////////////////////////////////////////////////////
//
// Application : Demonstrates file descriptor handling after open().
//
///////////////////////////////////////////////////////////////

int main() {

    int fd = 0;

    fd = open("Marvellous.txt", O_RDWR);

    if (fd == -1) 
        printf("Unable to open file.\n");
    else 
        printf("File opened with fd: %d.\n", fd);

    close(fd);

    return 0;
}
