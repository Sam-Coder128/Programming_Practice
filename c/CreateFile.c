///////////////////////////////////////////////////////////////
//
// File Name : FileCreateDemo.c
// Functions : main()
// Description: Explains file creation using creat() system call.
// Author:      Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>
#include <fcntl.h>

///////////////////////////////////////////////////////////////
//
// Application : Shows file descriptor return value after creat().
//
///////////////////////////////////////////////////////////////

int main() {

    int fd = 0;

    fd = creat("Marvellous.txt", 0777);

    if (fd == -1) 
        printf("Unable to create file.\n");
    else 
        printf("File created with fd: %d.\n", fd);

    return 0;
}
