///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : file descriptor, bytes written
// Description   : Demonstrates open and write system calls on a file.
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

///////////////////////////////////////////////////////////////
//
// Application : Shows how to open a file and write data into it.
//
///////////////////////////////////////////////////////////////

int main() {
    int fd = 0, res = 0;
    char Arr[] = "Marvellous Infosystems";

    fd = open("Marvellous.txt", O_RDWR);

    if (fd == -1) {
        printf("Unable to open file.\n");
    } else {
        printf("File opened with fd: %d.\n", fd);
        res = write(fd, Arr, 10);
        printf("%d bytes written in file.\n", res);
    }

    close(fd);
    return 0;
}
