#include <stdio.h>

struct A {
    char c;
    int i;
    long b;
};

int main(void) {
    printf("%zu\n", sizeof(struct A));
}
