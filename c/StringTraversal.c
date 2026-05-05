#include<stdio.h>

int StrLenX(char *ptr){ // Call By Address.
    int i=0;
    while (*ptr != '\0') {
       i++;
       ptr++;
    }
    return i;
}
int main() {

    char str[] = "Ganesh";
    char* ptr = NULL;

    ptr = str;                  //100

    while (*ptr!='\0'){
        printf("%c\n", *ptr);       
        ptr++;                     
    }

    int result = StrLenX(str); //StrLenX(100);
    printf("\n\n\nLength is: %d\n", result);

    return 0;    
}
