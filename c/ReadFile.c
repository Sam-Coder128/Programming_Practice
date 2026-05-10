///////////////////////////////////////////////////////////////
//
// Function Name : main
// Output        : printed values
// Description   : Shows file opening and reading using open() and read().
// Author        : Samruddh Shivkumar Birajdar
//
///////////////////////////////////////////////////////////////

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

///////////////////////////////////////////////////////////////
//
// Application : Explains reading bytes from file into buffer and printing.
//
///////////////////////////////////////////////////////////////

int main() {
    int fd = 0, res = 0;
    char Arr[20];

    fd = open("Marvellous.txt", O_RDWR);

    if (fd == -1) 
        printf("Unable to open file.\n");
    else {
        printf("File opened with fd: %d.\n", fd);

        res = read(fd, Arr, 6);   // read 6 bytes into Arr

        printf("%d bytes read from file.\n", res);
        printf("%s\n", Arr);      // print buffer contents
    }

    close(fd);
    return 0;
}
