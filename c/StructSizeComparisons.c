#include <stdio.h>

struct A {
    char a;
    int b;
};

struct B {
    int b;
    char a;
};

int main() {
    printf("Size of struct A: %lu\n", sizeof(struct A));
    printf("Size of struct B: %lu\n", sizeof(struct B));

    return 0;
}
