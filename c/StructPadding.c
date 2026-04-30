#include <stdio.h>

// default alignment
struct DefaultStruct {
    char a;
    int b;
};

// force 1-byte packing
#pragma pack(1)
struct PackedStruct {
    char a;
    int b;
};
#pragma pack() // reset to default

int main() {
    printf("Size of DefaultStruct: %lu\n", sizeof(struct DefaultStruct));
    printf("Size of PackedStruct (pragma pack 1): %lu\n", sizeof(struct PackedStruct));
    return 0;
}
