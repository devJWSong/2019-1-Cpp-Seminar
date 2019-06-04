#include <stdio.h>

void swap(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main() {

    int a = 5;
    int b = 10;
    int *pa = &a;
    int *pb = &b;

    printf("%d ", a);
    printf("%d\n", b);

    swap(pa, pb);

    printf("%d ", a);
    printf("%d\n", b);

    return 0;
}