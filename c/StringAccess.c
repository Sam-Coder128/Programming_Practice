#include<stdio.h>
int main(){
    char Arr[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int i=0;

    for ( i = 0; i < 6; i++)
        printf("%c\n", Arr[i]);   
}
