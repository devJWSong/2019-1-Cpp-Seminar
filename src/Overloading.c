#include <stdio.h>

void A() {
    printf("This is function A\n");
}

void A(int n) {
    printf("This is function A with %d", n);
}

int main() {

    A();
    A(1);

    return 0;
}