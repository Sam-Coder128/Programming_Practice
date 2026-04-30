#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student s;

    s.id = 1;
    s.marks = 85.5;

    printf("ID: %d\n", s.id);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
